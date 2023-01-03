#include "settings.h"
#include "variables.h"

void handleMIDIon(byte channel, byte note, byte velocity)
{
  if(debug_midi) Serial.println(String("Note On:  ch=") + channel + ", note=" + note + ", velocity=" + velocity + ", glidetime=" + glidetime);
  if(learn_active)
  {
    midichannel = channel;
    learn_active = 0;
    ledlastMillis = millis();
    led_menu_step(midichannel,3,0);
    getorsetsettings(1,0);
    
  }
  if (channel == (midichannel))
  {
    noteON(note);
    //led_takeover = 1;
    //midi_read = 0;
  }
  
}

void handleMIDIoff(byte channel, byte note, byte velocity)
{

  if (channel == (midichannel))
  {
    if(debug_midi) Serial.println(String("Note off:  ch=") + channel + ", note=" + note + ", velocity=" + velocity);
    noteOFF(note);
    //led_takeover = 0;
    //midi_read = 0;
  }
  
}

void pitchbend(byte channel, int bend)
{
  float bended;
  if (bend >= 0)
  {
    bended = (float)bend / 8191;
    pbend = 1 + bended;
  }
  if (bend < 0)
  {
    bended = (float)bend / 8192;
    pbend = 1 + 0.5 * bended;
  }

  if (channel == (midichannel))
  {
    if(debug_midi) Serial.println(String("Bend:") + bend);
    if(debug_midi) Serial.println(String("Bended:") + pbend);
    AudioNoInterrupts();

    AudioInterrupts();
  }
  midi_read = 0;
} //pitchbend ends

void controlchange(byte channel, byte number, byte value)
{

  float fvalue = value;
  if (channel == midichannel)
  {
    switch (number)
    {
    case 5:
      glidetime = 2 * (fvalue / 127);
      if(debug_midi) Serial.println(String("glidetime:") + glidetime);
      
      break;
    // case 20:
    //   osc2lvl = (fvalue/127)*100;
    //   AudioNoInterrupts();
    //   osc2v1.amplitude((osc2lvl/100)*waveampmult);
    //   osc2v2.amplitude((osc2lvl/100)*waveampmult);
    //   osc2v3.amplitude((osc2lvl/100)*waveampmult);
    //   osc2v4.amplitude((osc2lvl/100)*waveampmult);
    //   AudioInterrupts();
    // break;
    }
  }
  midi_read = 0;
}
