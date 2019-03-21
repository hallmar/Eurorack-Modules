#include <ResponsiveAnalogRead.h>
#include "settings.h"
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <MIDI.h>
#include <EEPROM.h>
#include <Bounce2.h>
MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

// GUItool: begin automatically generated code
AudioSynthWaveformModulated modulator5;     //xy=361,332
AudioSynthWaveformModulated modulator6;     //xy=362,370
AudioSynthWaveformModulated modulator7;     //xy=366,408
AudioSynthWaveformModulated modulator8;     //xy=367,450
AudioSynthWaveformModulated modulator2;     //xy=374,548
AudioSynthWaveformModulated modulator1;     //xy=377,512
AudioSynthWaveformModulated modulator3;     //xy=377,583
AudioSynthWaveformModulated modulator4;     //xy=381,620
AudioEffectEnvelope      modenvelope1;   //xy=595,515
AudioEffectEnvelope      modenvelope2;   //xy=595,547
AudioEffectEnvelope      modenvelope7;   //xy=598,404
AudioEffectEnvelope      modenvelope8;   //xy=599,444
AudioEffectEnvelope      modenvelope5;   //xy=600,331
AudioEffectEnvelope      modenvelope6;   //xy=600,365
AudioEffectEnvelope      modenvelope3;   //xy=600,582
AudioEffectEnvelope      modenvelope4;   //xy=601,619
AudioSynthWaveformModulated waveform5;      //xy=793,337
AudioSynthWaveformModulated waveform7;      //xy=794,404
AudioSynthWaveformModulated waveform6;      //xy=796,370
AudioSynthWaveformModulated waveform8;      //xy=797,441
AudioSynthWaveformModulated waveform1;      //xy=803,513
AudioSynthWaveformModulated waveform2;      //xy=807,550
AudioSynthWaveformModulated waveform4;      //xy=807,621
AudioSynthWaveformModulated waveform3;      //xy=808,584
AudioSynthKarplusStrong  string1;        //xy=849,679
AudioSynthKarplusStrong  string4;        //xy=849,793
AudioSynthKarplusStrong  string5;        //xy=850,848
AudioSynthKarplusStrong  string8;        //xy=850,962
AudioSynthKarplusStrong  string3;        //xy=851,755
AudioSynthKarplusStrong  string7;        //xy=852,924
AudioSynthKarplusStrong  string2;        //xy=854,717
AudioSynthKarplusStrong  string6;        //xy=855,886
AudioEffectEnvelope      envelope5;      //xy=1009,335
AudioEffectEnvelope      envelope6;      //xy=1009,370
AudioEffectEnvelope      envelope14;     //xy=1007,885
AudioEffectEnvelope      envelope7;      //xy=1009,405
AudioEffectEnvelope      envelope9;      //xy=1009,678
AudioEffectEnvelope      envelope10;     //xy=1009,715
AudioEffectEnvelope      envelope11;     //xy=1009,755
AudioEffectEnvelope      envelope12;     //xy=1009,792
AudioEffectEnvelope      envelope13;     //xy=1009,848
AudioEffectEnvelope      envelope16;     //xy=1010,962
AudioEffectEnvelope      envelope1;      //xy=1012,514
AudioEffectEnvelope      envelope2;      //xy=1012,552
AudioEffectEnvelope      envelope4;      //xy=1013,624
AudioEffectEnvelope      envelope15;     //xy=1012,924
AudioEffectEnvelope      envelope8;      //xy=1015,441
AudioEffectEnvelope      envelope3;      //xy=1015,590
AudioMixer4              mixer1;         //xy=1172,384
AudioMixer4              mixer2;         //xy=1176,563
AudioMixer4              mixer3;         //xy=1180,731
AudioMixer4              mixer4;         //xy=1180,886
AudioMixer4              mixer5;         //xy=1379,640
AudioAnalyzePeak         peak1;          //xy=1549,518
AudioOutputI2S           i2s1;           //xy=1649,639
AudioConnection          patchCord1(modulator5, modenvelope5);
AudioConnection          patchCord2(modulator6, modenvelope6);
AudioConnection          patchCord3(modulator7, modenvelope7);
AudioConnection          patchCord4(modulator8, modenvelope8);
AudioConnection          patchCord5(modulator2, modenvelope2);
AudioConnection          patchCord6(modulator1, modenvelope1);
AudioConnection          patchCord7(modulator3, modenvelope3);
AudioConnection          patchCord8(modulator4, modenvelope4);
AudioConnection          patchCord9(modenvelope1, 0, waveform1, 0);
AudioConnection          patchCord10(modenvelope2, 0, waveform2, 0);
AudioConnection          patchCord11(modenvelope7, 0, waveform7, 0);
AudioConnection          patchCord12(modenvelope8, 0, waveform8, 0);
AudioConnection          patchCord13(modenvelope5, 0, waveform5, 0);
AudioConnection          patchCord14(modenvelope6, 0, waveform6, 0);
AudioConnection          patchCord15(modenvelope3, 0, waveform3, 0);
AudioConnection          patchCord16(modenvelope4, 0, waveform4, 0);
AudioConnection          patchCord17(waveform5, envelope5);
AudioConnection          patchCord18(waveform7, envelope7);
AudioConnection          patchCord19(waveform6, envelope6);
AudioConnection          patchCord20(waveform8, envelope8);
AudioConnection          patchCord21(waveform1, envelope1);
AudioConnection          patchCord22(waveform2, envelope2);
AudioConnection          patchCord23(waveform4, envelope4);
AudioConnection          patchCord24(waveform3, envelope3);
AudioConnection          patchCord25(string1, envelope9);
AudioConnection          patchCord26(string4, envelope12);
AudioConnection          patchCord27(string5, envelope13);
AudioConnection          patchCord28(string8, envelope16);
AudioConnection          patchCord29(string3, envelope11);
AudioConnection          patchCord30(string7, envelope15);
AudioConnection          patchCord31(string2, envelope10);
AudioConnection          patchCord32(string6, envelope14);
AudioConnection          patchCord33(envelope5, 0, mixer1, 0);
AudioConnection          patchCord34(envelope6, 0, mixer1, 1);
AudioConnection          patchCord35(envelope14, 0, mixer4, 1);
AudioConnection          patchCord36(envelope7, 0, mixer1, 2);
AudioConnection          patchCord37(envelope9, 0, mixer3, 0);
AudioConnection          patchCord38(envelope10, 0, mixer3, 1);
AudioConnection          patchCord39(envelope11, 0, mixer3, 2);
AudioConnection          patchCord40(envelope12, 0, mixer3, 3);
AudioConnection          patchCord41(envelope13, 0, mixer4, 0);
AudioConnection          patchCord42(envelope16, 0, mixer4, 3);
AudioConnection          patchCord43(envelope1, 0, mixer2, 0);
AudioConnection          patchCord44(envelope2, 0, mixer2, 1);
AudioConnection          patchCord45(envelope4, 0, mixer2, 3);
AudioConnection          patchCord46(envelope15, 0, mixer4, 2);
AudioConnection          patchCord47(envelope8, 0, mixer1, 3);
AudioConnection          patchCord48(envelope3, 0, mixer2, 2);
AudioConnection          patchCord49(mixer1, 0, mixer5, 0);
AudioConnection          patchCord50(mixer2, 0, mixer5, 1);
AudioConnection          patchCord51(mixer3, 0, mixer5, 2);
AudioConnection          patchCord52(mixer4, 0, mixer5, 3);
AudioConnection          patchCord53(mixer5, peak1);
AudioConnection          patchCord54(mixer5, 0, i2s1, 0);
// GUItool: end automatically generated code



//----Outputs----------
const short gate_o = 10;
const short sin_led = 3;
const short sq_led = 4;
const short saw_led = 5;
const short tri_led = 6;
const short string_led = 8;
const short osc_led = 13;

//----Inputs-------------
const short waveshape = 7;
const short envelope = 12;
const short midi_learn = 2;
Bounce wavesh_but = Bounce();
Bounce envel_but = Bounce();
Bounce midilearn_but = Bounce();



//------Variables--------
#define INST_STR 0
#define INST_OSC 1
short debounce = 10;
byte voicenote[16] = {0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};
bool voicetrig[16] = {0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};
float voicefreq[8] = {};
float pbend = 1;
byte current_waveform = WAVEFORM_SINE;
byte current_instrument = INST_OSC;
byte current_modwaveform = WAVEFORM_SINE;
byte note;
//Everything to do with the midi channel and midi channel learn
bool learn_active = 0;
byte midi_channel = 1;
float sel_osc = 0.5;
float sel_strings = 0;
extern const float midi_notes[127];
short eeAddress = 1;
bool gate_out = 0;
byte gate_out_n;
float mod_index;
short ADCRes = 8192;
short ADCbit = 13;
float amplitude = 0.125;
int time_held = 0;

ResponsiveAnalogRead fm(A2, true);
ResponsiveAnalogRead fmcv(A1, true);
ResponsiveAnalogRead fmdec(A3, true);
ResponsiveAnalogRead modi(A4, true);
ResponsiveAnalogRead dec(A5, true);
ResponsiveAnalogRead modicv(A0, true);





float fm_cv;
float fm_knob;
float fmdec_knob;
float modi_knob;
float dec_knob;
float modi_cv; 
float fm_sum;
float modi_sum;


void setup() 
{
  
  AudioMemory(80);
  pinMode(sin_led, OUTPUT);
  pinMode(sq_led, OUTPUT);
  pinMode(saw_led, OUTPUT);
  pinMode(tri_led, OUTPUT);
  pinMode(string_led, OUTPUT);
  pinMode(osc_led, OUTPUT);
  pinMode(gate_o, OUTPUT);
  
  digitalWrite(sin_led, HIGH);
  digitalWrite(sq_led, LOW);
  digitalWrite(saw_led, LOW);
  digitalWrite(tri_led, LOW);

  digitalWrite(string_led, LOW);
  digitalWrite(osc_led, HIGH);
  
  pinMode(waveshape, INPUT);
  pinMode(envelope, INPUT);
  pinMode(midi_learn, INPUT);
  
  wavesh_but.attach(waveshape);
  wavesh_but.interval(debounce);
  
  envel_but.attach(envelope);
  envel_but.interval(debounce);
  
  midilearn_but.attach(midi_learn);
  midilearn_but.interval(debounce);
  
  byte eepromValue = EEPROM.read(0);
  
  if(eepromValue != 255)
  { 
    midi_channel = eepromValue;
  }
  eepromValue = EEPROM.read(1);
  if(eepromValue != 255)
  {
    current_waveform = eepromValue;
    waveformrefresh();
  }
  eepromValue = EEPROM.read(2);
  if(eepromValue != 255)
  {
    current_instrument = eepromValue;
    instrumentrefresh();
  }
  
	analogReadResolution(ADCbit);
	fm.setAnalogResolution(ADCRes);
	fmcv.setAnalogResolution(ADCRes);
	fmdec.setAnalogResolution(ADCRes);
	modi.setAnalogResolution(ADCRes);
	dec.setAnalogResolution(ADCRes);
	modicv.setAnalogResolution(ADCRes);
	fm.setActivityThreshold(40);
	fmcv.setActivityThreshold(40);
	fmdec.setActivityThreshold(40);
	modi.setActivityThreshold(40);
	dec.setActivityThreshold(40);
	modicv.setActivityThreshold(40);
  
	fm.enableEdgeSnap();
	fmcv.enableEdgeSnap();
	fmdec.enableEdgeSnap();
	modi.enableEdgeSnap();
	dec.enableEdgeSnap();
	modicv.enableEdgeSnap();


  fm.update();
  fmdec.update();
  fmcv.update();
  modi.update();
  dec.update();
  modicv.update();
  fm_knob = fm.getValue()/ADCRes;
  fm_cv = fmcv.getValue()/ADCRes;
  fmdec_knob = fmdec.getValue()/ADCRes*2000;
  modi_knob = (modi.getValue()/ADCRes)*10;
  dec_knob = (dec.getValue()/ADCRes )*2000;
  modi_cv = modicv.getValue()/ADCRes;
  mod_index = halfquantize(modi_knob);
  
  initial();
  MIDI.begin(MIDI_CHANNEL_OMNI);
  Serial.begin(57600); //set baud rate to 57600 if you want to send messages to serial console
  //normally its 31250
  MIDI.setHandleNoteOff(handleMIDIoff);
  MIDI.setHandleNoteOn(handleMIDIon);
  MIDI.setHandlePitchBend(pitchbend);
  MIDI.turnThruOn(); //turn on thru functionality for the MIDI out port
  //analogReference(DEFAULT);
}

void loop() 
{
  MIDI.read();
  fmcv.update();


  //--------------fm cv input----------------


  if(fmcv.hasChanged() == 1)
  {
  fm_cv = (float)fmcv.getValue();
  fm_cv = (fm_cv/ADCRes - (1/ADCRes));
  fm_sum = (fm_cv) + (fm_knob);
  if(fm_sum > 1)
  {fm_sum = 1;}
  AudioNoInterrupts();
  modulator1.amplitude(fm_sum/4);
  modulator2.amplitude(fm_sum/4);
  modulator3.amplitude(fm_sum/4);
  modulator4.amplitude(fm_sum/4);
  modulator5.amplitude(fm_sum/4);
  modulator6.amplitude(fm_sum/4);
  modulator7.amplitude(fm_sum/4);
  modulator8.amplitude(fm_sum/4);
  AudioInterrupts();  }

  fm.update();
  if(fm.hasChanged() == 1)
  {
  fm_knob = fm.getValue();
  fm_knob = (pow(fm_knob,2)/8191); //mapping the linear scale of the pot to a logarithmic 
  Serial.println(String("fm value(no div):")+fm_knob);
  fm_knob = (fm_knob/ADCRes - (1/ADCRes));
    /*if(fm_knob <= 0.001)
    {fm_knob = 0;}*/
    fm_sum = (fm_cv) + (fm_knob);
  if(fm_sum > 1)
  {fm_sum = 1;}
    AudioNoInterrupts();
  modulator1.amplitude(fm_sum/4);
  modulator2.amplitude(fm_sum/4);
  modulator3.amplitude(fm_sum/4);
  modulator4.amplitude(fm_sum/4);
  modulator5.amplitude(fm_sum/4);
  modulator6.amplitude(fm_sum/4);
  modulator7.amplitude(fm_sum/4);
  modulator8.amplitude(fm_sum/4);
  AudioInterrupts();

  }
  fmdec.update();
  //Read knobs
  
  if(fmdec.hasChanged() == 1)
  {
  fmdec_knob = (float)fmdec.getValue();
  Serial.println(String("fmdec value(no div):")+fmdec_knob);

  fmdec_knob = (fmdec_knob/ADCRes - (1/ADCRes));
  AudioNoInterrupts();
  modenvelope1.release(fmdec_knob*2000);
  modenvelope2.release(fmdec_knob*2000);
  modenvelope3.release(fmdec_knob*2000);
  modenvelope4.release(fmdec_knob*2000);
  modenvelope5.release(fmdec_knob*2000);
  modenvelope6.release(fmdec_knob*2000);
  modenvelope7.release(fmdec_knob*2000);
  modenvelope8.release(fmdec_knob*2000);
  AudioInterrupts();
  }
  modi.update();
  if(modi.hasChanged())
  {
  modi_knob = (float)modi.getValue();
  Serial.println(String("modi value(no div):")+modi_knob);
  modi_knob = (modi_knob/ADCRes - (1/ADCRes));
  modi_sum = (modi_cv) + (modi_knob);
  if(modi_sum > 1)
  {modi_sum = 1;}
  mod_index = halfquantize(modi_sum*10);
  AudioNoInterrupts();
  modulator1.frequency(voicefreq[0]*mod_index);
  modulator2.frequency(voicefreq[1]*mod_index);
  modulator3.frequency(voicefreq[2]*mod_index);
  modulator4.frequency(voicefreq[3]*mod_index);
  modulator5.frequency(voicefreq[4]*mod_index);
  modulator6.frequency(voicefreq[5]*mod_index);
  modulator7.frequency(voicefreq[6]*mod_index);
  modulator8.frequency(voicefreq[7]*mod_index);
  AudioInterrupts();
  /*
  AudioNoInterrupts();
  envelope1.attack(att_knob);
  envelope2.attack(att_knob);
  envelope3.attack(att_knob);
  envelope4.attack(att_knob);
  envelope5.attack(att_knob);
  envelope6.attack(att_knob);
  envelope7.attack(att_knob);
  envelope8.attack(att_knob);
  envelope9.attack(att_knob);
  envelope10.attack(att_knob);
  envelope10.attack(att_knob);
  envelope12.attack(att_knob);
  envelope13.attack(att_knob);
  envelope14.attack(att_knob);
  envelope15.attack(att_knob);
  envelope16.attack(att_knob);
  AudioInterrupts();
  * */
  }
  dec.update();

  if(dec.hasChanged() == 1)
  {
  dec_knob = (float)dec.getValue();
  dec_knob = dec_knob/ADCRes - (1/ADCRes);
  AudioNoInterrupts();
  envelope1.release(dec_knob*2000);
  envelope2.release(dec_knob*2000);
  envelope3.release(dec_knob*2000);
  envelope4.release(dec_knob*2000);
  envelope5.release(dec_knob*2000);
  envelope6.release(dec_knob*2000);
  envelope7.release(dec_knob*2000);
  envelope8.release(dec_knob*2000);
  envelope9.release(dec_knob*2000);
  envelope10.release(dec_knob*3000);
  envelope11.release(dec_knob*3000);
  envelope12.release(dec_knob*3000);
  envelope13.release(dec_knob*3000);
  envelope14.release(dec_knob*3000);
  envelope15.release(dec_knob*3000);
  envelope16.release(dec_knob*3000);
  AudioInterrupts(); 
  }
  //update bounce
  modicv.update();
  if(modicv.hasChanged() == 1)
  {
  modi_cv = (float)modicv.getValue();
  modi_cv = (modi_cv/ADCRes - (1/ADCRes));
  modi_sum = (modi_cv) + (modi_knob);
  if(modi_sum > 1)
  {modi_sum = 1;}
  mod_index = halfquantize(modi_sum*10);
  AudioNoInterrupts();
  modulator1.frequency(voicefreq[0]*mod_index);
  modulator2.frequency(voicefreq[1]*mod_index);
  modulator3.frequency(voicefreq[2]*mod_index);
  modulator4.frequency(voicefreq[3]*mod_index);
  modulator5.frequency(voicefreq[4]*mod_index);
  modulator6.frequency(voicefreq[5]*mod_index);
  modulator7.frequency(voicefreq[6]*mod_index);
  modulator8.frequency(voicefreq[7]*mod_index);
  AudioInterrupts();  } //mod cv if ends
  
  envel_but.update();
 if(envel_but.rose())
 {
  changeenvelope(); // in envelopes.ino
 }
 
 wavesh_but.update();
 if(wavesh_but.rose())
 {
  changewavesh(); // in envelopes.ino
 }


 midilearn_but.update();
 if(midilearn_but.rose())
 {
  while(digitalRead(midi_learn) == 1)
  {
	  delay(10);
	  time_held = time_held + 10;
	  Serial.println(String("Time ") + time_held);

  }
  if(time_held >= 500)
  {learn_active = 1;}
  else{allnotesoff();} // in envelopes.ino
  time_held = 0;
  //uncomment the serial commands below to be able to get audioprocessor usage max reports
  //Serial.println(String("Max processor usage: ")+ AudioProcessorUsageMax());
 }
 //AudioProcessorUsageMaxReset();
 if(peak1.available())
 {
	  
	 Serial.println(String("Peak: ") + peak1.read());
 }
} //loop ends

float halfquantize(float number)
{
  if(number>=0 && number <= 0.5)
  {return 0.5;}
  return (int)number;
}




  
