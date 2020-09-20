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
AudioAmplifier           amp1;           //xy=1059.800048828125,311
AudioAmplifier           amp2;           //xy=1062.800048828125,346
AudioAmplifier           amp3;           //xy=1067.800048828125,391
AudioAmplifier           amp5;           //xy=1069.800048828125,508
AudioAmplifier           amp4;           //xy=1070.800048828125,426
AudioAmplifier           amp6;           //xy=1072.800048828125,542
AudioAmplifier           amp7;           //xy=1072.800048828125,581
AudioAmplifier           amp8;          //xy=1080.800048828125,621
AudioAnalyzePeak         peak1;          //xy=1143,850
AudioSynthWaveformModulated modulator5;     //xy=1252.800048828125,320
AudioSynthWaveformModulated modulator6;     //xy=1253.800048828125,358
AudioSynthWaveformModulated modulator7;     //xy=1257.800048828125,396
AudioSynthWaveformModulated modulator8;     //xy=1258.800048828125,438
AudioSynthWaveformModulated modulator2;     //xy=1265.800048828125,536
AudioSynthWaveformModulated modulator1;     //xy=1268.800048828125,500
AudioSynthWaveformModulated modulator3;     //xy=1268.800048828125,571
AudioSynthWaveformModulated modulator4;     //xy=1272.800048828125,608
AudioEffectEnvelope      modenvelope1;   //xy=1486.800048828125,503
AudioEffectEnvelope      modenvelope2;   //xy=1486.800048828125,535
AudioEffectEnvelope      modenvelope7;   //xy=1489.800048828125,392
AudioEffectEnvelope      modenvelope8;   //xy=1490.800048828125,432
AudioEffectEnvelope      modenvelope5;   //xy=1491.800048828125,319
AudioEffectEnvelope      modenvelope6;   //xy=1491.800048828125,353
AudioEffectEnvelope      modenvelope3;   //xy=1491.800048828125,570
AudioEffectEnvelope      modenvelope4;   //xy=1492.800048828125,607
AudioSynthWaveformModulated waveform5;      //xy=1684.800048828125,325
AudioSynthWaveformModulated waveform7;      //xy=1685.800048828125,392
AudioSynthWaveformModulated waveform6;      //xy=1687.800048828125,358
AudioSynthWaveformModulated waveform8;      //xy=1688.800048828125,429
AudioSynthWaveformModulated waveform1;      //xy=1694.800048828125,501
AudioSynthWaveformModulated waveform2;      //xy=1698.800048828125,538
AudioSynthWaveformModulated waveform4;      //xy=1698.800048828125,609
AudioSynthWaveformModulated waveform3;      //xy=1699.800048828125,572
AudioSynthKarplusStrong  string3;        //xy=1705.800048828125,743
AudioSynthKarplusStrong  string1;        //xy=1707.800048828125,664
AudioSynthKarplusStrong  string2;        //xy=1707.800048828125,704
AudioSynthKarplusStrong  string4;        //xy=1709.800048828125,776
AudioSynthKarplusStrong  string5;        //xy=1717.800048828125,847
AudioSynthKarplusStrong  string6;        //xy=1722.800048828125,886
AudioSynthKarplusStrong  string7;        //xy=1724.800048828125,924
AudioSynthKarplusStrong  string8;        //xy=1725.800048828125,964
AudioEffectEnvelope      envelope9;      //xy=1881.800048828125,663
AudioEffectEnvelope      envelope10;     //xy=1881.800048828125,698
AudioEffectEnvelope      envelope11;     //xy=1881.800048828125,733
AudioEffectEnvelope      envelope13;     //xy=1883.800048828125,842
AudioEffectEnvelope      envelope14;     //xy=1884.800048828125,880
AudioEffectEnvelope      envelope16;     //xy=1885.800048828125,952
AudioEffectEnvelope      envelope12;     //xy=1887.800048828125,769
AudioEffectEnvelope      envelope15;     //xy=1889.800048828125,918
AudioEffectEnvelope      envelope5;      //xy=1900.800048828125,323
AudioEffectEnvelope      envelope6;      //xy=1900.800048828125,358
AudioEffectEnvelope      envelope7;      //xy=1900.800048828125,393
AudioEffectEnvelope      envelope1;      //xy=1903.800048828125,502
AudioEffectEnvelope      envelope2;      //xy=1903.800048828125,540
AudioEffectEnvelope      envelope4;      //xy=1904.800048828125,612
AudioEffectEnvelope      envelope8;      //xy=1906.800048828125,429
AudioEffectEnvelope      envelope3;      //xy=1906.800048828125,578
AudioMixer4              mixer1;         //xy=2063.800048828125,372
AudioMixer4              mixer2;         //xy=2067.800048828125,551
AudioMixer4              mixer3;         //xy=2071.800048828125,719
AudioMixer4              mixer4;         //xy=2071.800048828125,874
AudioMixer4              mixer5;         //xy=2270.800048828125,628
AudioOutputI2S           i2s1;           //xy=2422.800048828125,637
AudioConnection          patchCord1(amp1, 0, modulator5, 0);
AudioConnection          patchCord2(amp2, 0, modulator6, 0);
AudioConnection          patchCord3(amp3, 0, modulator7, 0);
AudioConnection          patchCord4(amp5, 0, modulator1, 0);
AudioConnection          patchCord5(amp4, 0, modulator8, 0);
AudioConnection          patchCord6(amp6, 0, modulator2, 0);
AudioConnection          patchCord7(amp7, 0, modulator3, 0);
AudioConnection          patchCord8(amp8, 0, modulator4, 0);
AudioConnection          patchCord9(modulator5, modenvelope5);
AudioConnection          patchCord10(modulator6, modenvelope6);
AudioConnection          patchCord11(modulator7, modenvelope7);
AudioConnection          patchCord12(modulator8, modenvelope8);
AudioConnection          patchCord13(modulator2, modenvelope2);
AudioConnection          patchCord14(modulator1, modenvelope1);
AudioConnection          patchCord15(modulator3, modenvelope3);
AudioConnection          patchCord16(modulator4, modenvelope4);
AudioConnection          patchCord17(modenvelope1, 0, waveform1, 0);
AudioConnection          patchCord18(modenvelope1, amp5);
AudioConnection          patchCord19(modenvelope2, 0, waveform2, 0);
AudioConnection          patchCord20(modenvelope2, amp6);
AudioConnection          patchCord21(modenvelope7, 0, waveform7, 0);
AudioConnection          patchCord22(modenvelope7, amp3);
AudioConnection          patchCord23(modenvelope8, 0, waveform8, 0);
AudioConnection          patchCord24(modenvelope8, amp4);
AudioConnection          patchCord25(modenvelope5, 0, waveform5, 0);
AudioConnection          patchCord26(modenvelope5, amp1);
AudioConnection          patchCord27(modenvelope6, 0, waveform6, 0);
AudioConnection          patchCord28(modenvelope6, amp2);
AudioConnection          patchCord29(modenvelope3, 0, waveform3, 0);
AudioConnection          patchCord30(modenvelope3, amp7);
AudioConnection          patchCord31(modenvelope4, 0, waveform4, 0);
AudioConnection          patchCord32(modenvelope4, amp8);
AudioConnection          patchCord33(waveform5, envelope5);
AudioConnection          patchCord34(waveform7, envelope7);
AudioConnection          patchCord35(waveform6, envelope6);
AudioConnection          patchCord36(waveform8, envelope8);
AudioConnection          patchCord37(waveform1, envelope1);
AudioConnection          patchCord38(waveform2, envelope2);
AudioConnection          patchCord39(waveform4, envelope4);
AudioConnection          patchCord40(waveform3, envelope3);
AudioConnection          patchCord41(string3, envelope11);
AudioConnection          patchCord42(string1, envelope9);
AudioConnection          patchCord43(string2, envelope10);
AudioConnection          patchCord44(string4, envelope12);
AudioConnection          patchCord45(string5, envelope13);
AudioConnection          patchCord46(string6, envelope14);
AudioConnection          patchCord47(string7, envelope15);
AudioConnection          patchCord48(string8, envelope16);
AudioConnection          patchCord49(envelope9, 0, mixer3, 0);
AudioConnection          patchCord50(envelope10, 0, mixer3, 1);
AudioConnection          patchCord51(envelope11, 0, mixer3, 2);
AudioConnection          patchCord52(envelope13, 0, mixer4, 0);
AudioConnection          patchCord53(envelope14, 0, mixer4, 1);
AudioConnection          patchCord54(envelope16, 0, mixer4, 3);
AudioConnection          patchCord55(envelope12, 0, mixer3, 3);
AudioConnection          patchCord56(envelope15, 0, mixer4, 2);
AudioConnection          patchCord57(envelope5, 0, mixer1, 0);
AudioConnection          patchCord58(envelope6, 0, mixer1, 1);
AudioConnection          patchCord59(envelope7, 0, mixer1, 2);
AudioConnection          patchCord60(envelope1, 0, mixer2, 0);
AudioConnection          patchCord61(envelope2, 0, mixer2, 1);
AudioConnection          patchCord62(envelope4, 0, mixer2, 3);
AudioConnection          patchCord63(envelope8, 0, mixer1, 3);
AudioConnection          patchCord64(envelope3, 0, mixer2, 2);
AudioConnection          patchCord65(mixer1, 0, mixer5, 0);
AudioConnection          patchCord66(mixer2, 0, mixer5, 1);
AudioConnection          patchCord67(mixer3, 0, mixer5, 2);
AudioConnection          patchCord68(mixer4, 0, mixer5, 3);
AudioConnection          patchCord69(mixer5, 0, i2s1, 0);
// GUItool: end automatically generated code
//----Outputs----------
const short gate_o = 10;
const short gate_o1 = 14;
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
byte voicenote[16] = { 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0 };
bool voicetrig[16] = { 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0 };
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
ResponsiveAnalogRead fmfeed(A3, true);
ResponsiveAnalogRead modi(A4, true);
ResponsiveAnalogRead dec(A5, true);

float fm_knob;
float fmfeed_knob;
float modi_knob;
float dec_knob;

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
  pinMode(gate_o1, OUTPUT);

  digitalWrite(gate_o1, LOW);
  digitalWrite(gate_o, HIGH);
  
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

	if (eepromValue != 255)
	{
		midi_channel = eepromValue;
	}
	eepromValue = EEPROM.read(1);
	if (eepromValue != 255)
	{
		current_waveform = eepromValue;
		waveformrefresh();
	}
	eepromValue = EEPROM.read(2);
	if (eepromValue != 255)
	{
		current_instrument = eepromValue;
		instrumentrefresh();
	}

	analogReadResolution(ADCbit);
	fm.setAnalogResolution(ADCRes);
	fmfeed.setAnalogResolution(ADCRes);
	modi.setAnalogResolution(ADCRes);
	dec.setAnalogResolution(ADCRes);

	fm.setActivityThreshold(40);
	fmfeed.setActivityThreshold(40);
	modi.setActivityThreshold(40);
	dec.setActivityThreshold(40);

	fm.enableEdgeSnap();
	fmfeed.enableEdgeSnap();
	modi.enableEdgeSnap();
	dec.enableEdgeSnap();


	fm.update();
	fmfeed.update();
	modi.update();
	dec.update();
	fm_knob = (1-((float)fm.getValue() / ADCRes - (1 / ADCRes)));
	fmfeed_knob = (1-((float)fmfeed.getValue() / ADCRes - (1 / ADCRes)));
	modi_knob = (1-((float)modi.getValue() / ADCRes)) * 10;
	dec_knob = (1-((float)dec.getValue() / ADCRes - (1 / ADCRes))) * 2000;
	mod_index = halfquantize(modi_knob);

	initial();
	MIDI.begin(MIDI_CHANNEL_OMNI);
	Serial.begin(57600); //set baud rate to 57600 if you want to send messages to serial console
	//normally its 31250
	MIDI.setHandleNoteOff(handleMIDIoff);
	MIDI.setHandleNoteOn(handleMIDIon);
	MIDI.setHandlePitchBend(pitchbend);
	MIDI.turnThruOff(); //turn off thru functionality for the MIDI out port
	//analogReference(DEFAULT);
}

void loop()
{
	MIDI.read();


	fm.update();
	if (fm.hasChanged() == 1)
	{
		fm_knob = 8191 - fm.getValue();
		fm_knob = (pow(fm_knob, 2) / 8191); //mapping the linear scale of the pot to a logarithmic 
		//Serial.println(String("fm value(no div):")+fm_knob);
		fm_knob = (fm_knob / ADCRes - (1 / ADCRes));
		/*if(fm_knob <= 0.001)
		{fm_knob = 0;}*/

		AudioNoInterrupts();
		modulator1.amplitude(fm_knob / 4);
		modulator2.amplitude(fm_knob / 4);
		modulator3.amplitude(fm_knob / 4);
		modulator4.amplitude(fm_knob / 4);
		modulator5.amplitude(fm_knob / 4);
		modulator6.amplitude(fm_knob / 4);
		modulator7.amplitude(fm_knob / 4);
		modulator8.amplitude(fm_knob / 4);
		AudioInterrupts();

	}
	//Read knobs

	fmfeed.update();
	if (fmfeed.hasChanged() == 1)
	{
		fmfeed_knob = (float)fmfeed.getValue();
		//Serial.println(String("fmfeed value(no div):")+fmfeed_knob);

		fmfeed_knob = (1-(fmfeed_knob / ADCRes - (1 / ADCRes)));
		AudioNoInterrupts();
		amp1.gain(fmfeed_knob / 2);
		amp2.gain(fmfeed_knob / 2);
		amp3.gain(fmfeed_knob / 2);
		amp4.gain(fmfeed_knob / 2);
		amp5.gain(fmfeed_knob / 2);
		amp6.gain(fmfeed_knob / 2);
		amp7.gain(fmfeed_knob / 2);
		amp8.gain(fmfeed_knob / 2);
		AudioInterrupts();
	}

	modi.update();
	if (modi.hasChanged())
	{
		modi_knob = (float)modi.getValue();
		//Serial.println(String("modi value(no div):")+modi_knob);
		modi_knob = (1-(modi_knob / ADCRes - (1 / ADCRes)));
	
		mod_index = halfquantize(modi_knob * 10);
		AudioNoInterrupts();
		modulator1.frequency(voicefreq[0] * mod_index);
		modulator2.frequency(voicefreq[1] * mod_index);
		modulator3.frequency(voicefreq[2] * mod_index);
		modulator4.frequency(voicefreq[3] * mod_index);
		modulator5.frequency(voicefreq[4] * mod_index);
		modulator6.frequency(voicefreq[5] * mod_index);
		modulator7.frequency(voicefreq[6] * mod_index);
		modulator8.frequency(voicefreq[7] * mod_index);
		AudioInterrupts();
	}

	dec.update();
	if (dec.hasChanged() == 1)
	{
		dec_knob = (float)dec.getValue();
		dec_knob = (1- dec_knob / ADCRes - (1 / ADCRes));
		AudioNoInterrupts();
		envelope1.release(dec_knob * 2000);
		envelope2.release(dec_knob * 2000);
		envelope3.release(dec_knob * 2000);
		envelope4.release(dec_knob * 2000);
		envelope5.release(dec_knob * 2000);
		envelope6.release(dec_knob * 2000);
		envelope7.release(dec_knob * 2000);
		envelope8.release(dec_knob * 2000);
		envelope9.decay(dec_knob * 3000);
		envelope10.decay(dec_knob * 3000);
		envelope11.decay(dec_knob * 3000);
		envelope12.decay(dec_knob * 3000);
		envelope13.decay(dec_knob * 3000);
		envelope14.decay(dec_knob * 3000);
		envelope15.decay(dec_knob * 3000);
		envelope16.decay(dec_knob * 3000);
		modenvelope1.release(dec_knob * 3000);
		modenvelope2.release(dec_knob * 3000);
		modenvelope3.release(dec_knob * 3000);
		modenvelope4.release(dec_knob * 3000);
		modenvelope5.release(dec_knob * 3000);
		modenvelope6.release(dec_knob * 3000);
		modenvelope7.release(dec_knob * 3000);
		modenvelope8.release(dec_knob * 3000);
		AudioInterrupts();
	}


	envel_but.update();
	if (envel_but.rose())
	{
		changeenvelope(); // in envelopes.ino
	}

	wavesh_but.update();
	if (wavesh_but.fell())
	{
		changewavesh(); // in envelopes.ino
	}


	midilearn_but.update();
	if (midilearn_but.rose())
	{
		while (digitalRead(midi_learn) == 1)
		{
			delay(10);
			time_held = time_held + 10;
			Serial.println(String("Time ") + time_held);

		}
		if (time_held >= 500)
		{
			learn_active = 1;
		}
		else { allnotesoff(); } // in envelopes.ino
		time_held = 0;
		//uncomment the serial commands below to be able to get audioprocessor usage max reports
		//Serial.println(String("Max processor usage: ")+ AudioProcessorUsageMax());
	}
	//AudioProcessorUsageMaxReset();
	if (peak1.available())
	{

		//Serial.println(String("Peak: ") + peak1.read());
	}
} //loop ends

float halfquantize(float number)
{
	if (number >= 0 && number <= 0.5)
	{
		return 0.5;
	}
	return (int)number;
}





