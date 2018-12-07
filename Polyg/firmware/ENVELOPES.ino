#include "settings.h"

void envelopeON(byte note)
{
  Serial.println("Envelope on");
  float freq_note = midi_notes[note-1];
  if(current_instrument == INST_OSC)
  {
	if(!gate_out)
	{
		gate_out = 1;
		digitalWrite(gate_o,HIGH);
		gate_out_n = note;
		Serial.println(String("Gate = ") + gate_out);
	}
	if(!voicetrig[0])
	{
		voicenote[0] = note;
		AudioNoInterrupts();
		voicefreq[0] = freq_note;
		envelope1.noteOn();
		modenvelope1.noteOn();
		modulator1.frequency(freq_note*mod_index);
		waveform1.frequency(freq_note);
		AudioInterrupts();
		voicetrig[0] = 1;
		return;
	}
	if(!voicetrig[1])
	{
		voicenote[1] = note;
		voicefreq[1] = freq_note;
		AudioNoInterrupts();
		envelope2.noteOn();
		modenvelope2.noteOn();
		modulator2.frequency(freq_note*mod_index);
		waveform2.frequency(freq_note);
		AudioInterrupts();
		voicetrig[1] = 1;
		return;
	}
	if(!voicetrig[2])
	{
		voicenote[2] = note;
		voicefreq[2] = freq_note;
		AudioNoInterrupts();
		envelope3.noteOn();
		modenvelope3.noteOn();
		modulator3.frequency(freq_note*mod_index);
		waveform3.frequency(freq_note);
		AudioInterrupts();
		voicetrig[2] = 1;
		return;
	}
	if(!voicetrig[3])
	{
		voicenote[3] = note;
		voicefreq[3] = freq_note;
		AudioNoInterrupts();
		envelope4.noteOn();
		modenvelope4.noteOn();
		modulator4.frequency(freq_note*mod_index);
		waveform4.frequency(freq_note);
		AudioInterrupts();
		voicetrig[3] = 1;
		return;
	}
		if(!voicetrig[4])
	{
		voicenote[4] = note;
		voicefreq[4] = freq_note;
		AudioNoInterrupts();
		envelope5.noteOn();
		modenvelope5.noteOn();
		modulator5.frequency(freq_note*mod_index);
		waveform5.frequency(freq_note);
		AudioInterrupts();
		voicetrig[4] = 1;
		return;
	}
	if(!voicetrig[5])
	{
		voicenote[5] = note;
		voicefreq[5] = freq_note;
		AudioNoInterrupts();
		envelope6.noteOn();
		modenvelope6.noteOn();
		modulator6.frequency(freq_note*mod_index);
		waveform6.frequency(freq_note);
		AudioInterrupts();
		voicetrig[5] = 1;
		return;
	}
	if(!voicetrig[6])
	{
		voicenote[6] = note;
		voicefreq[6] = freq_note;
		AudioNoInterrupts();
		envelope7.noteOn();
		modenvelope7.noteOn();
		modulator7.frequency(freq_note*mod_index);
		waveform7.frequency(freq_note);
		AudioInterrupts();
		voicetrig[6] = 1;
		return;
	}
	if(!voicetrig[7])
	{
		voicenote[7] = note;
		voicefreq[7] = freq_note;
		AudioNoInterrupts();
		envelope8.noteOn();
		modenvelope8.noteOn();
		modulator8.frequency(freq_note*mod_index);
		waveform8.frequency(freq_note);
		AudioInterrupts();
		voicetrig[7] = 1;
		return;
	}
  } //instrument if ends
  
  if(current_instrument == INST_STR)
  {
	if(!gate_out)
	{
		gate_out = 1;
		digitalWrite(gate_o,HIGH);
		gate_out_n = note;
	}
	if(voicetrig[8] == 0)
	{
		voicenote[8] = note;
		AudioNoInterrupts();
		string1.noteOff(1);
		string1.noteOn(freq_note, 1);
		envelope9.noteOn();
		AudioInterrupts();
		voicetrig[8] = 1;
		return;
	}
	if(voicetrig[9] == 0)
	{
		voicenote[9] = note;
		AudioNoInterrupts();
		string2.noteOff(1);
		string2.noteOn(freq_note, 1);
		envelope10.noteOn();
		AudioInterrupts();
		voicetrig[9] = 1;
		return;
	}
	if(voicetrig[10] == 0)
	{
		voicenote[10] = note;
		AudioNoInterrupts();
		string3.noteOff(1);
		string3.noteOn(freq_note, 1);
		envelope11.noteOn();
		AudioInterrupts();
		voicetrig[10] = 1;
		return;
	}
	if(voicetrig[11] == 0)
	{
		voicenote[11] = note;
		AudioNoInterrupts();
		string4.noteOff(1);
		string4.noteOn(freq_note, 1);
		envelope12.noteOn();
		AudioInterrupts();
		voicetrig[11] = 1;
		return;
	}
	if(voicetrig[12] == 0)
	{
		voicenote[12] = note;
		AudioNoInterrupts();
		string5.noteOff(1);
		string5.noteOn(freq_note, 1);
		envelope13.noteOn();
		AudioInterrupts();
		voicetrig[12] = 1;
		return;
	}
	if(voicetrig[13] == 0)
	{
		voicenote[13] = note;
		AudioNoInterrupts();
		string6.noteOff(1);
		string6.noteOn(freq_note, 1);
		envelope14.noteOn();
		AudioInterrupts();
		voicetrig[13] = 1;
		return;
	}
	if(voicetrig[14] == 0)
	{
		voicenote[14] = note;
		AudioNoInterrupts();
		string7.noteOff(1);
		string7.noteOn(freq_note, 1);
		envelope15.noteOn();
		AudioInterrupts();
		voicetrig[14] = 1;
		return;
	}
	if(voicetrig[15] == 0)
	{
		voicenote[15] = note;
		AudioNoInterrupts();
		string8.noteOff(1);
		string8.noteOn(freq_note, 1);
		envelope16.noteOn();
		AudioInterrupts();
		voicetrig[15] = 1;
		return;
	}
  } //instrument if ends
}

void envelopeOFF(byte note)
{
  Serial.println("Envelope off");

  if(current_instrument == INST_OSC)
  {
	if(gate_out&&(gate_out_n == note))
	{
		gate_out = 0;
		digitalWrite(gate_o,LOW);
	    Serial.println(String("Gate = ") + gate_out);

	}
	if((voicetrig[0] == 1) && (note == voicenote[0]))
	{
		AudioNoInterrupts();
		envelope1.noteOff();
		modenvelope1.noteOff();
		AudioInterrupts();
		voicetrig[0] = 0;
		return;
	}
	if((voicetrig[1] == 1) && (note == voicenote[1]))
	{
		AudioNoInterrupts();
		envelope2.noteOff();
		modenvelope2.noteOff();
		AudioInterrupts();
		voicetrig[1] = 0;   
		return;
	}
	if((voicetrig[2] == 1) && (note == voicenote[2]))
	{
		AudioNoInterrupts();
		envelope3.noteOff(); 
		modenvelope3.noteOff();
		AudioInterrupts();
		voicetrig[2] = 0;
		return;
	}
	if((voicetrig[3] == 1) && (note == voicenote[3]))
	{
		AudioNoInterrupts();
		envelope4.noteOff(); 
		modenvelope4.noteOff();
		AudioInterrupts();
		voicetrig[3] = 0;
		return;
	}
	if((voicetrig[4] == 1) && (note == voicenote[4]))
	{
		AudioNoInterrupts();
		envelope5.noteOff();
		modenvelope5.noteOff();
		AudioInterrupts();
		voicetrig[4] = 0;
		return;
	}
	if((voicetrig[5] == 1) && (note == voicenote[5]))
	{
		AudioNoInterrupts();
		envelope6.noteOff();
		modenvelope6.noteOff();
		AudioInterrupts();
		voicetrig[5] = 0;   
		return;
	}
	if((voicetrig[6] == 1) && (note == voicenote[6]))
	{
		AudioNoInterrupts();
		envelope7.noteOff(); 
		modenvelope7.noteOff();
		AudioInterrupts();
		voicetrig[6] = 0;
		return;
	}
	if((voicetrig[7] == 1) && (note == voicenote[7]))
	{
		AudioNoInterrupts();
		envelope8.noteOff(); 
		modenvelope8.noteOff();
		AudioInterrupts();
		voicetrig[7] = 0;
		return;
	}
  
  }
  //If we have strings selected
  if(current_instrument == INST_STR)
  {
	
	if(gate_out&&(gate_out_n == note))
	{
		gate_out = 0;
		digitalWrite(gate_o,LOW);
	}
	
	if((voicetrig[8]==1)&&(note == voicenote[8]))
	{
		envelope9.noteOff();
		voicetrig[8] = 0;
		return;
	}
	if((voicetrig[9]==1)&&(note == voicenote[9]))
	{
		envelope10.noteOff();  
		voicetrig[9] = 0;
		return;
	}
	if((voicetrig[10]==1)&&(note == voicenote[10]))
	{
		envelope11.noteOff();
		voicetrig[10] = 0;		
		return;
	}
	if((voicetrig[11]==1)&&(note == voicenote[11]))
	{
		envelope12.noteOff(); 
		voicetrig[11] = 0;
		return;
	}
	
	if((voicetrig[12]==1)&&(note == voicenote[12]))
	{
		envelope13.noteOff();
		voicetrig[12] = 0;
		return;
	}
	if((voicetrig[13]==1)&&(note == voicenote[13]))
	{
		envelope14.noteOff();  
		voicetrig[13] = 0;
		return;
	}
	if((voicetrig[14]==1)&&(note == voicenote[14]))
	{
		envelope15.noteOff();
		voicetrig[14] = 0;		
		return;
	}
	if((voicetrig[15]==1)&&(note == voicenote[15]))
	{
		envelope16.noteOff(); 
		voicetrig[15] = 0;
		return;
	}
  
  }
}

void changeenvelope()
{
  switch(current_instrument)
  {
    case INST_OSC:
      current_instrument = INST_STR;
      digitalWrite(string_led, HIGH);
      digitalWrite(osc_led, LOW);
	  sel_osc = 0;
	  sel_strings = 0.8;
    break;
    case INST_STR:
      current_instrument = INST_OSC;
      digitalWrite(string_led, LOW);
      digitalWrite(osc_led, HIGH);
	  sel_osc = 0.8;
	  sel_strings = 0;
    break; 
  }
  AudioNoInterrupts();
  mixer5.gain(0,sel_osc);
  mixer5.gain(1,sel_osc);
  mixer5.gain(2, sel_strings);
  mixer5.gain(3, sel_strings);
  AudioInterrupts();
  EEPROM.put(2, current_instrument);
}//change envelope ends

void changewavesh()
{
  switch(current_waveform)
  {
    case WAVEFORM_SINE:
      current_waveform = WAVEFORM_SQUARE;
      digitalWrite(sin_led, LOW);
      digitalWrite(sq_led, HIGH);
      digitalWrite(saw_led, LOW);
      digitalWrite(tri_led, LOW);
	  amplitude = 0.125;
      break;
    case WAVEFORM_SQUARE:
      current_waveform = WAVEFORM_SAWTOOTH;
      digitalWrite(sin_led, LOW);
      digitalWrite(sq_led, LOW);
      digitalWrite(saw_led, HIGH);
      digitalWrite(tri_led, LOW);
	  amplitude = 0.125;
      break;
    case WAVEFORM_SAWTOOTH:
      current_waveform = WAVEFORM_TRIANGLE;
      digitalWrite(sin_led, LOW);
      digitalWrite(sq_led, LOW);
      digitalWrite(saw_led, LOW);
      digitalWrite(tri_led, HIGH);
	  amplitude = 0.125;
      break;
    case WAVEFORM_TRIANGLE:
      current_waveform = WAVEFORM_SINE;
      digitalWrite(sin_led, HIGH);
      digitalWrite(sq_led, LOW);
      digitalWrite(saw_led, LOW);
      digitalWrite(tri_led, LOW);
	  amplitude = 0.125;
      break;
  }
  
  AudioNoInterrupts();
  waveform1.amplitude(amplitude);
  waveform2.amplitude(amplitude);
  waveform3.amplitude(amplitude);
  waveform4.amplitude(amplitude);
  waveform5.amplitude(amplitude);
  waveform6.amplitude(amplitude);
  waveform7.amplitude(amplitude);
  waveform8.amplitude(amplitude);

  waveform1.begin(current_waveform);
  waveform2.begin(current_waveform);
  waveform3.begin(current_waveform);
  waveform4.begin(current_waveform);
  waveform5.begin(current_waveform);
  waveform6.begin(current_waveform);
  waveform7.begin(current_waveform);
  waveform8.begin(current_waveform);
  AudioInterrupts();
  EEPROM.put(1, current_waveform);
} //change waveshape ends

void allnotesoff()
{
  Serial.println("All notes off");
  for(int i = 0; i<16; i++)
  {voicetrig[i] = 0;}
  AudioNoInterrupts();
  envelope1.noteOff();
  envelope2.noteOff();
  envelope3.noteOff();
  envelope4.noteOff();
  envelope5.noteOff();
  envelope6.noteOff();
  envelope7.noteOff();
  envelope8.noteOff();
  envelope9.noteOff();
  envelope10.noteOff();
  envelope11.noteOff();
  envelope12.noteOff();
  envelope13.noteOff();
  envelope14.noteOff();
  envelope15.noteOff();
  envelope16.noteOff();
  AudioInterrupts();
}

void waveformrefresh()
{
  switch(current_waveform)
  {
    case WAVEFORM_SQUARE:
      digitalWrite(sin_led, LOW);
      digitalWrite(sq_led, HIGH);
      digitalWrite(saw_led, LOW);
      digitalWrite(tri_led, LOW);
	  amplitude = 0.125;
      break;
    case WAVEFORM_SAWTOOTH:
      digitalWrite(sin_led, LOW);
      digitalWrite(sq_led, LOW);
      digitalWrite(saw_led, HIGH);
      digitalWrite(tri_led, LOW);
	  amplitude = 0.125;
      break;
    case WAVEFORM_TRIANGLE:
      digitalWrite(sin_led, LOW);
      digitalWrite(sq_led, LOW);
      digitalWrite(saw_led, LOW);
      digitalWrite(tri_led, HIGH);
	  amplitude = 0.125;
      break;
    case WAVEFORM_SINE:
      digitalWrite(sin_led, HIGH);
      digitalWrite(sq_led, LOW);
      digitalWrite(saw_led, LOW);
      digitalWrite(tri_led, LOW);
	  amplitude = 0.125;
      break;
  }
  

  AudioNoInterrupts();
  waveform1.amplitude(amplitude);
  waveform2.amplitude(amplitude);
  waveform3.amplitude(amplitude);
  waveform4.amplitude(amplitude);
  waveform5.amplitude(amplitude);
  waveform6.amplitude(amplitude);
  waveform7.amplitude(amplitude);
  waveform8.amplitude(amplitude);

  waveform1.begin(current_waveform);
  waveform2.begin(current_waveform);
  waveform3.begin(current_waveform);
  waveform4.begin(current_waveform);
  waveform5.begin(current_waveform);
  waveform6.begin(current_waveform);
  waveform7.begin(current_waveform);
  waveform8.begin(current_waveform);
  AudioInterrupts();
  
}

void instrumentrefresh()
{
  switch(current_instrument)
  {
    case INST_STR:
      digitalWrite(string_led, HIGH);
      digitalWrite(osc_led, LOW);
	  sel_osc = 0;
	  sel_strings = 0.9;
    break;
    case INST_OSC:
      digitalWrite(string_led, LOW);
      digitalWrite(osc_led, HIGH);
	  sel_osc = 0.9;
	  sel_strings = 0;
    break; 
  }
  AudioNoInterrupts();
  mixer5.gain(0,sel_osc);
  mixer5.gain(1,sel_osc);
  mixer5.gain(2, sel_strings);
  mixer5.gain(3, sel_strings);
  AudioInterrupts();
}
