#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>
#include <ResponsiveAnalogRead.h>
#include <Bounce2.h>
#include <Encoder.h>
#include <MIDI.h>
#include <USBHost_t36.h>
#include <EEPROM.h>
#include <Monome.h>
#include "settings.h"
#include "variables.h"

//Fjöl v3, took away Oled screen. Added some LED's and alot more

MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);
USBHost myusb;
//MIDIDevice_BigBuffer midi1(myusb);
MIDIDevice midi1(myusb);
// GUItool: begin automatically generated code
AudioSynthWaveformModulated op3v1;          //xy=101.78585433959961,525.0318431854248
AudioSynthWaveformModulated op3v3;          //xy=101.78585433959961,619.0318431854248
AudioSynthWaveformModulated op3v2;          //xy=102.78585433959961,573.0318431854248
AudioSynthWaveformModulated op3v4;          //xy=102.78585433959961,670.0318431854248
AudioEffectEnvelope      op3env1;        //xy=217.7858543395996,524.0318431854248
AudioEffectEnvelope      op3env3;        //xy=217.7858543395996,619.0318431854248
AudioEffectEnvelope      op3env2;        //xy=218.7858543395996,573.0318431854248
AudioEffectEnvelope      op3env4;        //xy=218.7858543395996,670.0318431854248
AudioAmplifier           op3amp2;        //xy=349.7858543395996,571.0318431854248
AudioAmplifier           op3amp4;        //xy=354.23036193847656,667.476354598999
AudioAmplifier           op3amp1;        //xy=359.67476654052734,522.0319309234619
AudioAmplifier           op3amp3;        //xy=359.84936141967773,615.6509189605713
AudioMixer4              algomix5; //xy=521.8254470825195,496.1904830932617
AudioMixer4              algomix6; //xy=521.3968315124512,625.4762287139893
AudioMixer4              algomix7; //xy=521.3968315124512,686.4762287139893
AudioMixer4              algomix8; //xy=522.3968315124512,564.4762287139893
AudioSynthWaveformModulated op2v3;          //xy=660.8969116210938,620.254056930542
AudioSynthWaveformModulated op2v4;          //xy=662.0079956054688,674.6984920501709
AudioSynthWaveformModulated op2v2;          //xy=663.2302932739258,571.2540454864502
AudioSynthWaveformModulated op2v1;          //xy=664.3413619995117,522.0319366455078
AudioEffectEnvelope      op2env2;        //xy=791.341365814209,573.1429576873779
AudioEffectEnvelope      op2env1;        //xy=792.3415107727051,529.8096466064453
AudioEffectEnvelope      op2env3;        //xy=792.341365814209,619.1429576873779
AudioEffectEnvelope      op2env4;        //xy=792.341365814209,669.1429576873779
AudioAmplifier           op2amp3; //xy=954.2857666015625,607.1428833007812
AudioAmplifier           op2amp4; //xy=954.2857666015625,667.1428833007812
AudioAmplifier           op2amp2; //xy=957.1428833007812,557.1428833007812
AudioAmplifier           op2amp1; //xy=972.8571548461914,487.14286613464355
AudioMixer4              algomix1;       //xy=1198.0556755065918,516.000057220459
AudioMixer4              algomix3;       //xy=1199.0556755065918,641.000057220459
AudioMixer4              algomix4;       //xy=1199.0556755065918,702.000057220459
AudioMixer4              algomix2;       //xy=1200.0556755065918,580.000057220459
AudioSynthWaveformModulated op1v1;          //xy=1345.0556755065918,521.000057220459
AudioSynthWaveformModulated op1v4;          //xy=1345.0556755065918,666.000057220459
AudioSynthWaveformModulated op1v2;          //xy=1346.0556755065918,571.000057220459
AudioSynthWaveformModulated op1v3;          //xy=1346.0556755065918,617.000057220459
AudioMixer4              voice1;         //xy=1561,642
AudioMixer4              voice2;         //xy=1561,716
AudioMixer4              voice3;         //xy=1562,789
AudioMixer4              voice4;         //xy=1563,860
AudioSynthWaveformDc     dc2;            //xy=1680.666763305664,388.2222270965576
AudioSynthWaveformDc     filtfreq;       //xy=1687.333438873291,488.44443130493164
AudioEffectEnvelope      envelope1;      //xy=1766,642
AudioEffectEnvelope      envelope2;      //xy=1769,717
AudioEffectEnvelope      envelope3;      //xy=1770,788
AudioEffectEnvelope      envelope4;      //xy=1772,860
AudioEffectEnvelope      filtenv;        //xy=1841.4445762634277,375.2221050262451
AudioMixer4              mixer1;         //xy=1865.0002212524414,473.4444122314453
AudioSynthWaveformDc     dc3; //xy=2003.8890380859375,400.0000305175781
AudioMixer4              left;           //xy=2007,661
AudioMixer4              right;          //xy=2009,841
AudioMixer4              mixer2; //xy=2046.1112785339355,488.88895416259766
AudioFilterLadder        ladder1;        //xy=2167,655
AudioFilterLadder        ladder2;        //xy=2171,826
AudioAmplifier           amp1;           //xy=2189.999931335449,503.33330726623535
AudioOutputI2S           i2s1;           //xy=2369.111207008362,715.4444522857666
AudioConnection          patchCord1(op3v1, op3env1);
AudioConnection          patchCord2(op3v3, op3env3);
AudioConnection          patchCord3(op3v2, op3env2);
AudioConnection          patchCord4(op3v4, op3env4);
AudioConnection          patchCord5(op3env1, op3amp1);
AudioConnection          patchCord6(op3env3, op3amp3);
AudioConnection          patchCord7(op3env2, op3amp2);
AudioConnection          patchCord8(op3env4, op3amp4);
AudioConnection          patchCord9(op3amp2, 0, algomix8, 1);
AudioConnection          patchCord10(op3amp2, 0, algomix2, 1);
AudioConnection          patchCord11(op3amp4, 0, algomix7, 1);
AudioConnection          patchCord12(op3amp4, 0, algomix4, 1);
AudioConnection          patchCord13(op3amp1, 0, algomix5, 1);
AudioConnection          patchCord14(op3amp1, 0, algomix1, 1);
AudioConnection          patchCord15(op3amp3, 0, algomix6, 1);
AudioConnection          patchCord16(op3amp3, 0, algomix3, 1);
AudioConnection          patchCord17(algomix5, 0, op2v1, 0);
AudioConnection          patchCord18(algomix6, 0, op2v3, 0);
AudioConnection          patchCord19(algomix7, 0, op2v4, 0);
AudioConnection          patchCord20(algomix8, 0, op2v2, 0);
AudioConnection          patchCord21(op2v3, op2env3);
AudioConnection          patchCord22(op2v3, 0, algomix6, 0);
AudioConnection          patchCord23(op2v4, op2env4);
AudioConnection          patchCord24(op2v4, 0, algomix7, 0);
AudioConnection          patchCord25(op2v2, op2env2);
AudioConnection          patchCord26(op2v2, 0, algomix8, 0);
AudioConnection          patchCord27(op2v1, op2env1);
AudioConnection          patchCord28(op2v1, 0, algomix5, 0);
AudioConnection          patchCord29(op2env2, op2amp2);
AudioConnection          patchCord30(op2env1, op2amp1);
AudioConnection          patchCord31(op2env3, op2amp3);
AudioConnection          patchCord32(op2env4, op2amp4);
AudioConnection          patchCord33(op2amp3, 0, algomix3, 0);
AudioConnection          patchCord34(op2amp3, 0, voice3, 1);
AudioConnection          patchCord35(op2amp4, 0, algomix4, 0);
AudioConnection          patchCord36(op2amp4, 0, voice4, 1);
AudioConnection          patchCord37(op2amp2, 0, algomix2, 0);
AudioConnection          patchCord38(op2amp2, 0, voice2, 1);
AudioConnection          patchCord39(op2amp1, 0, algomix1, 0);
AudioConnection          patchCord40(op2amp1, 0, voice1, 1);
AudioConnection          patchCord41(algomix1, 0, op1v1, 0);
AudioConnection          patchCord42(algomix3, 0, op1v3, 0);
AudioConnection          patchCord43(algomix4, 0, op1v4, 0);
AudioConnection          patchCord44(algomix2, 0, op1v2, 0);
AudioConnection          patchCord45(op1v1, 0, voice1, 0);
AudioConnection          patchCord46(op1v1, 0, algomix1, 2);
AudioConnection          patchCord47(op1v4, 0, voice4, 0);
AudioConnection          patchCord48(op1v4, 0, algomix4, 2);
AudioConnection          patchCord49(op1v2, 0, voice2, 0);
AudioConnection          patchCord50(op1v2, 0, algomix2, 2);
AudioConnection          patchCord51(op1v3, 0, voice3, 0);
AudioConnection          patchCord52(op1v3, 0, algomix3, 2);
AudioConnection          patchCord53(voice1, envelope1);
AudioConnection          patchCord54(voice2, envelope2);
AudioConnection          patchCord55(voice3, envelope3);
AudioConnection          patchCord56(voice4, envelope4);
AudioConnection          patchCord57(dc2, filtenv);
AudioConnection          patchCord58(filtfreq, 0, mixer1, 1);
AudioConnection          patchCord59(envelope1, 0, left, 0);
AudioConnection          patchCord60(envelope1, 0, right, 0);
AudioConnection          patchCord61(envelope2, 0, left, 1);
AudioConnection          patchCord62(envelope2, 0, right, 1);
AudioConnection          patchCord63(envelope3, 0, left, 2);
AudioConnection          patchCord64(envelope3, 0, right, 2);
AudioConnection          patchCord65(envelope4, 0, left, 3);
AudioConnection          patchCord66(envelope4, 0, right, 3);
AudioConnection          patchCord67(filtenv, 0, mixer1, 0);
AudioConnection          patchCord68(mixer1, 0, mixer2, 1);
AudioConnection          patchCord69(dc3, 0, mixer2, 0);
AudioConnection          patchCord70(left, 0, ladder1, 0);
AudioConnection          patchCord71(right, 0, ladder2, 0);
AudioConnection          patchCord72(mixer2, amp1);
AudioConnection          patchCord73(ladder1, 0, i2s1, 0);
AudioConnection          patchCord74(ladder2, 0, i2s1, 1);
AudioConnection          patchCord75(amp1, 0, ladder1, 1);
AudioConnection          patchCord76(amp1, 0, ladder2, 1);
// GUItool: end automatically generated code
Bounce switch1 = Bounce();
Bounce switch2 = Bounce();
Bounce ctl1_switch = Bounce();
Bounce ctl2_switch = Bounce();
Bounce midi_switch = Bounce();

ResponsiveAnalogRead ctl3(A17, true);
ResponsiveAnalogRead ratio1(A8, true);
ResponsiveAnalogRead ratio2(A5, true);
ResponsiveAnalogRead pm1(A4, true);
ResponsiveAnalogRead pm2(A3, true);
ResponsiveAnalogRead release(A2, true);
ResponsiveAnalogRead attack(A1, true);
ResponsiveAnalogRead freq(A0, true);
ResponsiveAnalogRead ctl1_cv(A16, true);
ResponsiveAnalogRead ctl2_cv(A14, true);

Encoder ctl1_enc(ctl1_enc_a,ctl1_enc_b);
Encoder ctl2_enc(ctl2_enc_a,ctl2_enc_b);

unsigned long lastMillis = millis();
unsigned long ledlastMillis = millis();
unsigned long savelastMillis = millis();

#define PCA9622_I2C_ADDRESS 0x60 // NOTE: Make sure to use the correct I2C address as the PCA9622 can have 128 different addresses

//Monome m;

float ctl1_temp = 0;
float ctl2_temp = 0;

//debug variables
bool debug_pots = 1;
bool debug_midi = 0;
bool peak_flag = 0;

void setup()
{
  Wire2.begin();
  // m.setup(); //setup grid
  // m.keyDownCallback = &kDown;
  // m.keyUpCallback = &kUp;
  // if you want to really speed stuff up, you can go into 'fast 400khz I2C' mode
  // some i2c devices dont like this so much so if you're sharing the bus, watch
  // out for this!
  Wire2.setClock(400000UL);
  // Initialize the device
  startPCA9622();
  //analog in settings and knobs
  analogReadResolution(ADCbit);
  pm1.setAnalogResolution(ADCRes);
  pm2.setAnalogResolution(ADCRes);
  ratio1.setAnalogResolution(ADCRes);
  ratio2.setAnalogResolution(ADCRes);
  freq.setAnalogResolution(ADCRes);
  ctl3.setAnalogResolution(ADCRes);
  attack.setAnalogResolution(ADCRes);
  release.setAnalogResolution(ADCRes);
  ctl1_cv.setAnalogResolution(ADCRes);
  ctl2_cv.setAnalogResolution(ADCRes);

  pm1.setActivityThreshold(activitythreshold);
  pm2.setActivityThreshold(activitythreshold);
  ratio1.setActivityThreshold(modactivitythreshold);
  ratio2.setActivityThreshold(modactivitythreshold);
  freq.setActivityThreshold(activitythreshold);
  ctl3.setActivityThreshold(activitythreshold);
  attack.setActivityThreshold(activitythreshold);
  release.setActivityThreshold(activitythreshold);
  ctl1_cv.setActivityThreshold(activitythreshold);
  ctl2_cv.setActivityThreshold(activitythreshold);

  pm1.enableEdgeSnap();
  pm2.enableEdgeSnap();
  ratio1.enableEdgeSnap();
  ratio2.enableEdgeSnap();
  freq.enableEdgeSnap();
  ctl3.enableEdgeSnap();
  attack.enableEdgeSnap();
  release.enableEdgeSnap();
  ctl1_cv.enableEdgeSnap();
  ctl2_cv.enableEdgeSnap();

  pm1_knob = (1 - ((float)pm1.getValue() / ADCRes - (1 / ADCRes)));
  pm2_knob = (1 - ((float)pm2.getValue() / ADCRes - (1 / ADCRes)));
  ratio1_knob = (1 - ((float)ratio1.getValue() / ADCRes)) * ratiosteps;
  ratio2_knob = (1 - ((float)ratio2.getValue() / ADCRes)) * ratiosteps;
  freq_knob = (1 - ((float)freq.getValue() / ADCRes - (1 / ADCRes)));
  ctl3_knob = (1 - ((float)ctl3.getValue() / ADCRes - (1 / ADCRes)));
  attack_knob = (1 - ((float)attack.getValue() / ADCRes - (1 / ADCRes)));
  release_knob = (1 - ((float)release.getValue() / ADCRes - (1 / ADCRes)));
  ctl1_cv_value = (1 - ((float)ctl1_cv.getValue() / ADCRes - (1 / ADCRes)));
  ctl2_cv_value = (1 - ((float)ctl2_cv.getValue() / ADCRes - (1 / ADCRes)));

  op2_ratio = ratioindex[(int)(ratio1_knob * ratiosteps)];
  op3_ratio = ratioindex[(int)(ratio2_knob * ratiosteps)];
  //button inputs
  switch1.attach(sw1, INPUT_PULLUP);
  switch2.attach(sw2, INPUT_PULLUP);
  ctl1_switch.attach(ctl1_sw, INPUT_PULLUP);
  ctl2_switch.attach(ctl2_sw, INPUT_PULLUP);
  midi_switch.attach(midi_sw, INPUT_PULLUP);
  switch1.interval(debounce);
  switch2.interval(debounce);
  ctl1_switch.interval(debounce);
  ctl2_switch.interval(debounce);
  midi_switch.interval(debounce);

  //midi settings

  //Serial.begin(57600); //set baud rate to 57600 if you want to send messages to serial console
  //normally its 31250

  MIDI.begin(MIDI_CHANNEL_OMNI);
  myusb.begin();

  midi1.setHandleNoteOn(handleMIDIon);
  midi1.setHandleNoteOff(handleMIDIoff);
  midi1.setHandleControlChange(controlchange);

  MIDI.setHandleNoteOff(handleMIDIoff);
  MIDI.setHandleNoteOn(handleMIDIon);
  MIDI.setHandlePitchBend(pitchbend);
  MIDI.setHandleControlChange(controlchange);


  AudioMemory(120);
  getorsetsettings(0, load_preset); //get settings from EEPROM
  delay(500);
  initial();                          //initialize all audio objects
  //setja calibration á ís þar til ég finn út úr því
  switch2.update();
  if( (digitalRead(sw2) == 0) )
  {
      Serial.println(String("Calibrate "));
      calibrate();
  }
  for(int i = 0; i<15;i++)
  {
    setpwm(i,128);
    delay(50);
    setpwm(i,0);
    delay(50);
  }
  led_update(8);
 
}



void loop()
{ 
 
  //m.loop();
  if(MIDI.read())
  {
    midi_read = 1;
  }
  if(midi1.read())
  {
    midi_read = 1;
  }

  if(led_takeover == 0)
  {
    ctl1_temp = encoder1_read();
    if(ctl1_temp != 0)
    {
      update_params(ctl1_dest,ctl1_temp,0);
    }
    ctl2_temp = encoder2_read();
    if(ctl2_temp != 0)
    {
      update_params(ctl2_dest,ctl2_temp,0);
    }
    for(int i = 0;i<8;i++)
    {
      if(params_changed[i] == 1 && midi_switch.read() && switch1.read() && switch2.read())
      {
        //Serial.println(String("Params changed"));
        led_update(i);
        params_changed[i] = 0; 
      }
    } //for ends
  } //if led takeover ends
  
  //if any other UI feature has taken over the LED's then count up to 2 seconds and go back to the normal UI for LED's
  if( led_takeover == 1 && ((millis() - ledlastMillis) >= 500) )
  {
    led_takeover = 0;
    //Serial.println(led_takeover);
    led_update(8);
  } 


    ctl1_switch.update();
  switch2.update();

  //---------ctl1 destination-------
  if((digitalRead(sw2) == 1) && ctl1_switch.fell() )
  {
    ctl1_dest = ctl1_dest+1;
    if(ctl1_dest > 3) ctl1_dest = 0;
    Serial.println(String("ctl1 dest=") + ctl1_dest);
    led_takeover = 1; 
    ledlastMillis = millis();  
    led_menu_step(ctl1_dest,green,0);
    Serial.println(led_takeover);
    getorsetsettings(1,0);//save settings
  }

  //---------ctl1 cv destination-------
  if(!(switch2.read()) && ctl1_switch.fell())
  {
    ctl1cv_dest = ctl1cv_dest+1;
    if(ctl1cv_dest > 3) ctl1cv_dest = 0;
    Serial.println(String("ctl1 cv dest=") + ctl1cv_dest);
    led_takeover = 1; 
    ledlastMillis = millis();  
    led_menu_step(ctl1cv_dest,red,0);
    cv_mod[ctl1cv_dest] = ctl1_cv_value;
    cv_mod[ctl1cv_dest] = 0;
    getorsetsettings(1,0);//save settings
  }

  ctl2_switch.update();
  switch2.update();
  //---------ctl2 destination-------
  if((digitalRead(sw2) == 1) && ctl2_switch.fell())
  {
    ctl2_dest = ctl2_dest+1;
    if(ctl2_dest > 7) ctl2_dest = 4;
    Serial.println(String("ctl2 dest=") + ctl2_dest);
    led_takeover = 1; 
    ledlastMillis = millis(); 
    led_menu_step(ctl2_dest,green,0); 
    
    getorsetsettings(1,0);//save settings
  } 

  //---------ctl2cv destination-------
  if(!(switch2.read()) && ctl2_switch.fell())
  {
    ctl2cv_dest = ctl2cv_dest+1;
    if(ctl2cv_dest > 7) ctl2cv_dest = 0;
    Serial.println(String("ctl2 cv dest=") + ctl2cv_dest);
    led_takeover = 1;  
    ledlastMillis = millis(); 
    led_menu_step(ctl2cv_dest,red,0);
    cv_mod[ctl2cv_dest] = ctl2_cv_value;
    cv_mod[ctl2cv_dest] = 0;
    getorsetsettings(1,0);//save settings
  }

  //---------algorithm select-------
  switch1.update();
  if(switch1.fell() && (digitalRead(sw2) == 1) )
  {
    algo_select = algo_select+1;
    if(algo_select == 3) algo_select = 0;
    Serial.println(String("Algo select=") + algo_select);
     //PM algorithm select
    //AudioNoInterrupts();
    select_algorithm();
    led_takeover = 1;
    ledlastMillis = millis();
    led_menu_step(algo_select,red,0);

    getorsetsettings(1,0); //save settings
  }

  //---------midi switch-------
  midi_switch.update();
  if(midi_switch.fell())
  {
    while((digitalRead(midi_sw) == 0) && midi_lastmillis < 2000)
    {
      delay(1);
			midi_lastmillis = midi_lastmillis + 1;
      Serial.println(String("Time ") + midi_lastmillis);

    }
    if(midi_lastmillis >= 2000)
    {
      Serial.println(String("Midi learn "));
      learn_active = 1;
      
    }
    else
    {
      midipanic();
    }
    midi_lastmillis = 0;
  } 

  //pots and cv

  pm1.update();
  if (pm1.hasChanged() == 1)
  {
    pm1_knob = (upperpm1 - lowerpm1) - pm1.getValue();

    pm1_knob = (pow(pm1_knob, 2) / (upperpm1 - lowerpm1)); //mapping the linear scale of the pot to a logarithmic
    //Serial.println(String("fm value(no div):")+fm_knob);
    pm1_knob = (pm1_knob / (upperpm1 - lowerpm1) - (1 / (upperpm1 - lowerpm1)));
    if(debug_pots) Serial.println(String("pm1 knob:") + pm1_knob);
    /*if(fm_knob <= 0.001)
      {fm_knob = 0;}*/

    AudioNoInterrupts();
    op2amp1.gain(pm1_knob);
    op2amp2.gain(pm1_knob);
    op2amp3.gain(pm1_knob);
    op2amp4.gain(pm1_knob);
    op2v1.amplitude(pm1_knob);
    op2v2.amplitude(pm1_knob);
    op2v3.amplitude(pm1_knob);
    op2v4.amplitude(pm1_knob);
    AudioInterrupts();
  }

  pm2.update();
  if (pm2.hasChanged() == 1)
  {
    pm2_knob = (upperfm2 - lowerfm2) - pm2.getValue();
    pm2_knob = (pow(pm2_knob, 2) / (upperfm2 - lowerfm2)); //mapping the linear scale of the pot to a logarithmic
    //Serial.println(String("fm value(no div):")+fm_knob);
    pm2_knob = (pm2_knob / (upperfm2 - lowerfm2) - (1 / (upperfm2 - lowerfm2)));
     if(debug_pots) Serial.println(String("FM2 knob:") + pm2_knob);
    /*if(fm_knob <= 0.001)
      {fm_knob = 0;}*/

    AudioNoInterrupts();
    op3amp1.gain(pm2_knob);
    op3amp2.gain(pm2_knob);
    op3amp3.gain(pm2_knob);
    op3amp4.gain(pm2_knob);
    op3v1.amplitude(pm2_knob);
    op3v2.amplitude(pm2_knob);
    op3v3.amplitude(pm2_knob);
    op3v4.amplitude(pm2_knob);
    AudioInterrupts();
  }

  ratio1.update();
  if (ratio1.hasChanged())
  {
    ratio1_knob = (upperratio1 - lowerratio1) - (float)ratio1.getValue();
     if(debug_pots)Serial.println(String("Ratio1 knob:") + ratio1_knob);
    //Serial.println(String("modi value(no div):")+modi_knob);
    ratio1_knob = (ratio1_knob / (upperratio1 - lowerratio1) - (1 / (upperratio1 - lowerratio1)));

    op2_ratio = ratioindex[(int)(ratio1_knob * ratiosteps)];
    AudioNoInterrupts();
    op2v1.frequency(voicefreq[0] * op2_ratio);
    op2v2.frequency(voicefreq[1] * op2_ratio);
    op2v3.frequency(voicefreq[2] * op2_ratio);
    op2v4.frequency(voicefreq[3] * op2_ratio);
    AudioInterrupts();
  }

  ratio2.update();
  if (ratio2.hasChanged())
  {
    ratio2_knob = (upperratio2 - lowerratio2) - (float)ratio2.getValue();
     if(debug_pots)Serial.println(String("Ratio2 knob:") + ratio2_knob);
    //Serial.println(String("modi value(no div):")+modi_knob);
    ratio2_knob = ((ratio2_knob / (upperratio2 - lowerratio2) - (1 / (upperratio2 - lowerratio2))));

    op3_ratio = ratioindex[(int)(ratio2_knob * ratiosteps)];
    AudioNoInterrupts();
    op3v1.frequency(voicefreq[0] * op3_ratio);
    op3v2.frequency(voicefreq[1] * op3_ratio);
    op3v3.frequency(voicefreq[2] * op3_ratio);
    op3v4.frequency(voicefreq[3] * op3_ratio);
    AudioInterrupts();
  }

  release.update();
  if (release.hasChanged())
  {
    release_knob = (upperrelease - lowerrelease) - (float)release.getValue();
     if(debug_pots)Serial.println(String("Release knob:") + release_knob);
    //Serial.println(String("modi value(no div):")+modi_knob);
    release_knob = ((release_knob / (upperrelease - lowerrelease) - (1 / (upperrelease - lowerrelease))));

    AudioNoInterrupts();
    op2env1.release(release_knob * releasemult);
    op2env2.release(release_knob * releasemult);
    op2env3.release(release_knob * releasemult);
    op2env4.release(release_knob * releasemult);

    op3env1.release(release_knob * releasemult);
    op3env2.release(release_knob * releasemult);
    op3env3.release(release_knob * releasemult);
    op3env4.release(release_knob * releasemult);

    envelope1.release(release_knob * releasemult);
    envelope2.release(release_knob * releasemult);
    envelope3.release(release_knob * releasemult);
    envelope4.release(release_knob * releasemult);
    
    AudioInterrupts();
  }

  attack.update();
  if (attack.hasChanged())
  {
    attack_knob = (upperattack - lowerattack) - (float)attack.getValue();
     if(debug_pots)Serial.println(String("Attack:") + attack_knob);
    //Serial.println(String("modi value(no div):")+modi_knob);
    attack_knob = (attack_knob / (upperattack - lowerattack) - (1 / (upperattack - lowerattack)));

    AudioNoInterrupts();
    op2env1.attack(attack_knob * 1000);
    op2env2.attack(attack_knob * 1000);
    op2env3.attack(attack_knob * 1000);
    op2env4.attack(attack_knob * 1000);

    op3env1.attack(attack_knob * 1000);
    op3env2.attack(attack_knob * 1000);
    op3env3.attack(attack_knob * 1000);
    op3env4.attack(attack_knob * 1000);

    envelope1.attack(attack_knob * 1000);
    envelope2.attack(attack_knob * 1000);
    envelope3.attack(attack_knob * 1000);
    envelope4.attack(attack_knob * 1000);
    
    AudioInterrupts();
  }

  freq.update();
  if (freq.hasChanged() || start == 1)
  {
    freq_knob = (upperfreq - lowerfreq) - (float)freq.getValue();
    //Serial.println(String("ctl1 knob:") + ctl1_knob);
    freq_knob = (pow(freq_knob, 2) / (upperfreq - lowerfreq));
    freq_knob = (freq_knob / (upperfreq - lowerfreq) - (1 / (upperfreq - lowerfreq)));
     if(debug_pots)Serial.println(String("ctl1 knob2:") + ((freq_knob * 2)-1));
    filtfreq.amplitude((freq_knob));
  } //ctl 1 ends

  ctl1_cv.update();
  if (ctl1_cv.hasChanged() || start == 1)
  {
    ctl1_cv_value = (upperctl1 - lowerctl1) - (float)ctl1_cv.getValue();
    ctl1_cv_value = (ctl1_cv_value / (upperctl1 - lowerctl1) - (1 / (upperctl1 - lowerctl1)));
    if(debug_pots)Serial.println(String("ctl1_cv:") + ctl1_cv_value + String("ctl1_cv_dest:")+ctl1cv_dest);
    cv_mod[ctl1cv_dest] = ctl1_cv_value;
    update_params(ctl1cv_dest, 0, ctl1_cv_value);
  } //ctl 1 ends

  ctl2_cv.update();
  if (ctl2_cv.hasChanged() || start == 1)
  {
    ctl2_cv_value = (upperctl2 - lowerctl2) - (float)ctl2_cv.getValue();
    ctl2_cv_value = (ctl2_cv_value / (upperctl2 - lowerctl2) - (1 / (upperctl2 - lowerctl2)));
    if(debug_pots)Serial.println(String("ctl2_cv:") + ctl2_cv_value+ String("ctl2_cv_dest:")+ctl2cv_dest);
    cv_mod[ctl2cv_dest] = ctl2_cv_value;
    update_params(ctl2cv_dest, 0, ctl2_cv_value);
  } //ctl 2 ends

  ctl3.update();
  if (ctl3.hasChanged() || start == 1)
  {
    ctl3_knob = (upperctl3 - lowerctl3) - (float)ctl3.getValue();
    
    ctl3_knob = (ctl3_knob / (upperctl3 - lowerctl3) - (1 / (upperctl3 - lowerctl3)));
    if(debug_pots)Serial.println(String("ctl3:") + ctl3_knob);
    // if(ctl3_knob < 0.05)
    // {ctl3_knob = 0;}
    // glidetime = ctl3_knob/4;
    dc2.amplitude((ctl3_knob));
    
  } //ctl 3 ends

  
 
  //---------glide-------
  if ((millis() - lastMillis) >= glidetime)
  {
    lastMillis = millis(); //get ready for the next iteration
    glideval();
  }
  if((millis()-savelastMillis) >= 30000) //save settings every 30 seconds
  {
    savelastMillis = millis();
    getorsetsettings(1,0);//save settings
  }

  AudioNoInterrupts();
  op1v1.frequency(voicefreq[0] * (1+lfo_value) );
  op2v1.frequency(voicefreq[0] * op2_ratio * (1+op2detune) );
  op3v1.frequency(voicefreq[0] * op3_ratio * (1+op3detune) );


  op1v2.frequency(voicefreq[1]* (1+lfo_value) );
  op2v2.frequency(voicefreq[1] * op2_ratio * (1+op2detune) );
  op3v2.frequency(voicefreq[1] * op3_ratio * (1+op3detune) );


  op1v3.frequency(voicefreq[2]* (1+lfo_value) );
  op2v3.frequency(voicefreq[2] * op2_ratio * (1+op2detune) );
  op3v3.frequency(voicefreq[2] * op3_ratio * (1+op3detune) );

  
  op1v4.frequency(voicefreq[3]* (1+lfo_value) );
  op2v4.frequency(voicefreq[3] * op2_ratio * (1+op2detune) );
  op3v4.frequency(voicefreq[3] * op3_ratio * (1+op3detune) );
  AudioInterrupts();
  start = 0;

} //main endar

float calcright(float theta) //calculate -4.5dB pan law
{

  float right = sqrt((theta) * (2 / PI) * sin(theta));
  //Serial.println(String("Right:") + right);
  return right;
}

float calcleft(float theta) //calculate -4.5dB pan law
{
  float left = sqrt((PI / 2 - (theta)) * (2 / PI) * cos(theta));
  //Serial.println(String("Left:") + left);
  return left;
}

void update_spread()
{
  float righttemp = calcright(((spread_sum / 200) + 0.5) * PI / 2);
  float lefttemp = calcleft(((spread_sum / 200) + 0.5) * PI / 2);
  // Serial.println(String("Righttemp:") + righttemp);
  // Serial.println(String("lefttemp:") + lefttemp);
  voice1panL = lefttemp;
  voice1panR = righttemp;
  voice4panR = lefttemp;
  voice4panL = righttemp;
  righttemp = calcright((((100 - spread_sum) / 400) + 0.25) * PI / 2);
  lefttemp = calcleft((((100 - spread_sum) / 400) + 0.25) * PI / 2);
  // Serial.println(String("Righttemp2:") + righttemp);
  // Serial.println(String("lefttemp2:") + lefttemp);
  voice2panL = lefttemp;
  voice2panR = righttemp;
  voice3panR = lefttemp;
  voice3panL = righttemp;

  AudioNoInterrupts();
  right.gain(0, voice1panR * 0.8);
  left.gain(0, voice1panL * 0.8);

  right.gain(1, voice2panR * 0.8);
  left.gain(1, voice2panL * 0.8);

  right.gain(2, voice3panR * 0.8);
  left.gain(2, voice3panL * 0.8);

  right.gain(3, voice4panR * 0.8);
  left.gain(3, voice4panL * 0.8);
  AudioInterrupts();
}

void getorsetsettings(bool getorset, uint8_t preset)
{
  int eeaddress = 0;
  //midichannel - preset - saveddata array
  
  Serial.println(eeaddress);
  EEPROM.put(1, preset);
  struct data
  {
    float d_param5 = 0;
    float d_param6 = 0;

    float d_param7 = 0;
    float d_param8 = 0;

    float d_spread = 0;

    uint8_t d_algo_select = 0;

    uint8_t d_ctl1_dest = 0;
    uint8_t d_ctl1cv_dest = 0;
    uint8_t d_ctl2_dest = 0;
    uint8_t d_ctl2cv_dest = 0;

    float d_resonance = 0;

    float d_param3 = 0;
    float d_param4 = 0;
  };
  Serial.println(String("Data size:")+ sizeof(data));
  eeaddress = (2 * sizeof(uint8_t));
  //typedef struct data Data;

  data savedata[8];
  data loaddata[8];

  if (getorset == 0)
  {
    EEPROM.get(0, midichannel);
    if(midichannel > 16 || midichannel < 1)
    {midichannel = 1;}
    Serial.println(String("Loaded midi channel:")+ midichannel);

    EEPROM.get(eeaddress, loaddata);
    //read osc1
    param5 = loaddata[preset].d_param5;
    param6 = loaddata[preset].d_param6;
 


    //check if values are out of bounds
    if(param5 < 0 || param5 > 1 || isnan(param5))
      param5 = 0;
    if(param6<0 || param6 > 0.2 || isnan(param6))
      param6 = 0;
    
    
    //read osc2
    param7 = loaddata[preset].d_param7;
    param8 = loaddata[preset].d_param8;
    delay(1);
    
    //check if values are out of bounds
    if(param7 < 0 || param7 > 1 || isnan(param7))
      param7 = 0;
    if(param8<0 || param8 > 0.2 || isnan(param8))
      param8 = 0;
  

    spread = loaddata[preset].d_spread;
    delay(1);
    if(spread < 0 || spread > 100 || isnan(spread))
      spread = 0;
      spread_old = spread;

    //read phase modulation
    algo_select = loaddata[preset].d_algo_select;
    //check if values are out of bounds
    if(algo_select < 0 || algo_select > 2)
      algo_select = 0;

    ctl1_dest = loaddata[preset].d_ctl1_dest;
    if(ctl1_dest < 0 || ctl1_dest > 3)
    {
      ctl1_dest = 0;
    }
    ctl1cv_dest = loaddata[preset].d_ctl1cv_dest;
    if(ctl1cv_dest < 0 || ctl1cv_dest > 7)
    {
      ctl1cv_dest = 3;
    }
    ctl2_dest = loaddata[preset].d_ctl2_dest;
    if(ctl2_dest < 4 || ctl2_dest > 7)
    {
      ctl2_dest = 4;
    }
    ctl2cv_dest = loaddata[preset].d_ctl2cv_dest;
    if(ctl2cv_dest < 0 || ctl2cv_dest > 7)
    {
      ctl2cv_dest = 7;
    }

    resonance = loaddata[preset].d_resonance;
    delay(1);
    if(resonance < 0 || resonance > 1|| isnan(resonance))
    {
      resonance = 0;
    }
    param3 = loaddata[preset].d_param3;
    delay(1);
    if(param3 < 0 || param3 > 1|| isnan(param3)) 
    {
      param3 = 0;
    }
    param4 = loaddata[preset].d_param4;
    delay(1);
    if(param4 < 0 || param4 > 1|| isnan(param4))
    {
      param4 = 0;
    }

    return;
  }

  else if (getorset == 1)
  {
    Serial.println(String("saved data to point:")+ eeaddress);
    EEPROM.put(0, midichannel);
    savedata[preset].d_param5 = param5;
    savedata[preset].d_param6 = param6;

    savedata[preset].d_param7 = param7;
    savedata[preset].d_param8 = param8;

    savedata[preset].d_spread = spread;
    savedata[preset].d_algo_select = algo_select;

    savedata[preset].d_ctl1_dest = ctl1_dest;
    savedata[preset].d_ctl1cv_dest = ctl1cv_dest;
    savedata[preset].d_ctl2_dest = ctl2_dest;
    savedata[preset].d_ctl2cv_dest = ctl2cv_dest;

    savedata[preset].d_resonance = resonance;
    savedata[preset].d_param3 = param3;
    savedata[preset].d_param4 = param4;
    EEPROM.put(eeaddress, savedata);
    return;
  }
} //get or set ends

void glideval()
{
  int voicenumb = 4;
  if (glidetime > 0)
  {

    for (int i = 0; i < voicenumb; i++)
    {
      if (voicefreqtarget[i] > int(voicefreq[i]))
      {
        voicefreq[i] = voicefreq[i] + glide;
        if (int(voicefreq[i]) > voicefreqtarget[i])
          voicefreq[i] = voicefreqtarget[i];
      }
      else if (voicefreqtarget[i] < int(voicefreq[i]))
      {
        voicefreq[i] = voicefreq[i] - glide;
        if (int(voicefreq[i]) < voicefreqtarget[i])
          voicefreq[i] = voicefreqtarget[i];
      }
      else
      {
        voicefreq[i] = voicefreqtarget[i];
      }
    }
  } //if glidetime > 0 ends
  else if (glidetime == 0)
  {
    for (int i = 0; i < voicenumb; i++)
    {
      voicefreq[i] = voicefreqtarget[i];
    }
  }
} //glideval() ends


void midipanic()
{
  AudioNoInterrupts();
    envelope1.noteOff();
    op2env1.noteOff();
    op3env1.noteOff();
    envelope2.noteOff();
    op2env2.noteOff();
    op3env2.noteOff();
    envelope3.noteOff();
    op2env3.noteOff();
    op3env3.noteOff();
    envelope4.noteOff();
    op2env4.noteOff();
    op3env4.noteOff();
  AudioInterrupts();
  voicetrig[0] = 0;
  voicetrig[1] = 0;
  voicetrig[2] = 0;
  voicetrig[3] = 0;
  gate_out = 0;
  digitalWrite(gate, HIGH);
}

void update_params(int destination, float value, float mod)
{
  
  params_changed[destination] = 1;
  switch(destination){
      case 0:
        spread = spread + (value*100);

        if(spread > 100) {spread = 100; params_changed[destination] = 0;led_update(destination);}
        if(spread < 0) {spread = 0; params_changed[destination] = 0;led_update(destination);}

        spread_sum = spread + (cv_mod[0]*100);

        if(spread_sum > 100) {spread_sum = 100; params_changed[destination] = 0;led_update(destination);}
        if(spread_sum < 0) {spread_sum = 0; params_changed[destination] = 0;led_update(destination);}

        Serial.println(String("spread:") + spread_sum);
        update_spread();
        return;
      break;
      case 1:
        resonance = resonance + (value);

        if(resonance > 1) {resonance = 1; params_changed[destination] = 0;led_update(destination);}
        if(resonance < 0) {resonance = 0; params_changed[destination] = 0;led_update(destination);}

        resonance_sum = resonance + cv_mod[1];
        if(resonance_sum > 1) {resonance_sum = 1; params_changed[destination] = 0;led_update(destination);}
        if(resonance_sum < 0) {resonance_sum = 0; params_changed[destination] = 0;led_update(destination);}

        Serial.println(String("Resonance:") + resonance_sum);
        ladder1.resonance(resonance_sum);
        ladder2.resonance(resonance_sum);
        return;
      break;
      case 2:
        param3 = param3 + value;
        if(param3 > 1) {param3 = 1; params_changed[destination] = 0;led_update(destination);}
        if(param3 < 0) {param3 = 0; params_changed[destination] = 0;led_update(destination);}

        param3_sum = param3 + cv_mod[2];
        if(param3_sum > 1) {param3_sum = 1; params_changed[destination] = 0;led_update(destination);}
        if(param3_sum < 0) {param3_sum = 0; params_changed[destination] = 0;led_update(destination);}
        Serial.println(String("Param3:") + param3_sum);
        filtenv.release(param3_sum * releasemult);
        //operator 1 feedback
        return;
      break;
      case 3:
        param4 = param4 + value;
        if(param4 > 1) {param4 = 1; params_changed[destination] = 0;led_update(destination);}
        if(param4 < 0) {param4 = 0; params_changed[destination] = 0;led_update(destination);}

        param4_sum = param4 + cv_mod[3];
        if(param4_sum > 1) {param4_sum = 1; params_changed[destination] = 0;led_update(destination);}
        if(param4_sum < 0) {param4_sum = 0; params_changed[destination] = 0;led_update(destination);}
        Serial.println(String("Param4:") + param4_sum);
        glidetime = param4_sum/6;
        return;
        
      break;
      case 4:
        param5 = param5 + (value);
        if(param5 > 1) {param5 = 1; params_changed[destination] = 0;led_update(destination);}
        if(param5 < 0) {param5 = 0; params_changed[destination] = 0;led_update(destination);}

        param5_sum = param5 + cv_mod[4];
        if(param5_sum > 1) {param5_sum = 1; params_changed[destination] = 0;led_update(destination);}
        if(param5_sum < 0) {param5_sum = 0; params_changed[destination] = 0;led_update(destination);}
        Serial.println(String("param5:") + param5_sum);
        op2detune = param5_sum / detunemult;
        return;

        
      break;
      case 5:
        param6 = param6 + (value);
        if(param6 > 1) {param6 = 1; params_changed[destination] = 0;led_update(destination);}
        if(param6 < 0) {param6 = 0; params_changed[destination] = 0; led_update(destination);} 

        param6_sum = param6 + cv_mod[5];
        if(param6_sum > 1) {param6_sum = 1; params_changed[destination] = 0;led_update(destination);}
        if(param6_sum < 0) {param6_sum = 0; params_changed[destination] = 0;led_update(destination); } 
        Serial.println(String("param6:") + param6_sum);   
        op3detune = param6_sum / detunemult;
        return;
      break;

      case 6:
        param7 = param7 + (value);
        if(param7 > 1) {param7 = 1; params_changed[destination] = 0;led_update(destination);}
        if(param7 < 0) {param7 = 0; params_changed[destination] = 0;led_update(destination);}

        param7_sum = param7 + cv_mod[6];
        if(param7_sum > 1) {param7_sum = 1; params_changed[destination] = 0;led_update(destination);}
        if(param7_sum < 0) {param7_sum = 0; params_changed[destination] = 0;led_update(destination);}

        Serial.println(String("param7:") + param7_sum);
    
        AudioNoInterrupts();
        algomix1.gain(2,param7_sum*2);
        algomix2.gain(2,param7_sum*2);
        algomix3.gain(2,param7_sum*2);
        algomix4.gain(2,param7_sum*2);
        AudioInterrupts();
        return;
        
      break;

      case 7:
      param8 = param8 + value;
      if(param8 > 1) {param8 = 1; params_changed[destination] = 0;led_update(destination);}
      if(param8 < 0) {param8 = 0; params_changed[destination] = 0;led_update(destination);}

      param8_sum = param8 + cv_mod[7];
      if(param8_sum > 1) {param8_sum = 1; params_changed[destination] = 0;led_update(destination);}
      if(param8_sum < 0) {param8_sum = 0; params_changed[destination] = 0;led_update(destination);}

      Serial.println(String("Param8:")+param8_sum);
      //dc1.amplitude(param8_sum);
        AudioNoInterrupts();
        algomix5.gain(0,param8_sum*(0.25));
        algomix6.gain(0,param8_sum*(0.25));
        algomix7.gain(0,param8_sum*(0.25));
        algomix8.gain(0,param8_sum*(0.25));
        AudioInterrupts();
      return;
      break;
    } //switch ends
}

void select_algorithm()
{
  switch(algo_select)
    {
      case 0:
        AudioNoInterrupts();
        //op3 -> op2
        algomix5.gain(1, 0);
        algomix6.gain(1, 0);
        algomix7.gain(1, 0);
        algomix8.gain(1, 0);
        //op3 -> op1
        algomix1.gain(1, 1);
        algomix2.gain(1, 1);
        algomix3.gain(1, 1);
        algomix4.gain(1, 1);
        //op2 -> op1
        algomix1.gain(0, 1);
        algomix2.gain(0, 1);
        algomix3.gain(0, 1);
        algomix4.gain(0, 1);
        //op2 to output mixer
        voice1.gain(1,0);
        voice2.gain(1,0);
        voice3.gain(1,0);
        voice4.gain(1,0);
        AudioInterrupts();
        return;
      break;
      case 1:
        AudioNoInterrupts();
        //op3 -> op2
        algomix5.gain(1, 1);
        algomix6.gain(1, 1);
        algomix7.gain(1, 1);
        algomix8.gain(1, 1);
        //op3 -> op1
        algomix1.gain(1, 0);
        algomix2.gain(1, 0);
        algomix3.gain(1, 0);
        algomix4.gain(1, 0);
        //op2 -> op1
        algomix1.gain(0, 1);
        algomix2.gain(0, 1);
        algomix3.gain(0, 1);
        algomix4.gain(0, 1);
        //op2 to output mixer
        voice1.gain(1,0);
        voice2.gain(1,0);
        voice3.gain(1,0);
        voice4.gain(1,0);
        AudioInterrupts();
        return;
      break;
      case 2:
        AudioNoInterrupts();
        //op3 -> op2
        algomix5.gain(1, 0);
        algomix6.gain(1, 0);
        algomix7.gain(1, 0);
        algomix8.gain(1, 0);
        //op3 -> op1
        algomix1.gain(1, 1);
        algomix2.gain(1, 1);
        algomix3.gain(1, 1);
        algomix4.gain(1, 1);
        //op2 -> op1
        algomix1.gain(0, 0);
        algomix2.gain(0, 0);
        algomix3.gain(0, 0);
        algomix4.gain(0, 0);
        //op2 to output mixer
        voice1.gain(1,mixerinit*(pmampmult/2));
        voice2.gain(1,mixerinit*(pmampmult/2));
        voice3.gain(1,mixerinit*(pmampmult/2));
        voice4.gain(1,mixerinit*(pmampmult/2));
        AudioInterrupts();
        return;
      break;
    }
}

void calibrate()
{
  bool next = 0;
  float enc1 = 0;
  float enc2 = 0;
  return;
  while(next == 0)
  {
    enc1 = (encoder1_read()*100);
    if(enc1 != 0)
    {
      lowerpm1 = lowerpm1 + enc1;
      Serial.println(String("LowerPM1:") + lowerpm1);
    }
    for(int i = 0; i<= 15;i++)
    {
      if(i == 0)
      {
        setpwm(i,(upperpm1 - lowerpm1) - pm1.getValue());
      }
      else
      {
        setpwm(i,0);
      }
    }
    switch2.update();
    if(switch2.fell())
    {
      next = 1;
    }
  } //calibrate lower pm1 
  next = 0;
  while(next == 0)
  {
    enc2 = (encoder2_read()*100);
    if(enc2 != 0)
    {
      upperpm1 = upperpm1 + enc2; 
      Serial.println(String("UpperPM1:") + upperpm1);
    }
    for(int i = 0; i<= 15;i++)
    {
      if(i == 1)
      {
        setpwm(i,(upperpm1 - lowerpm1) - pm1.getValue());
      }
      else
      {
        setpwm(i,0);
      }
    }
    switch2.update();
    if(switch2.fell())
    {
      next = 1;
    }
  } //calibrate upper pm1 
  next = 0;
  return;
}

