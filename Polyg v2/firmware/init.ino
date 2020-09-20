#include "settings.h"
void initial()
{
	short att_knob = 0;
	//Instantiate values for DSP blocks
	AudioNoInterrupts();
	waveform1.begin(0.125, voicefreq[0], current_waveform);
	waveform2.begin(0.125, voicefreq[1], current_waveform);
	waveform3.begin(0.125, voicefreq[2], current_waveform);
	waveform4.begin(0.125, voicefreq[3], current_waveform);
	waveform5.begin(0.125, voicefreq[0], current_waveform);
	waveform6.begin(0.125, voicefreq[1], current_waveform);
	waveform7.begin(0.125, voicefreq[2], current_waveform);
	waveform8.begin(0.125, voicefreq[3], current_waveform);
	//Set the phase modulation for the carriers
	waveform1.frequencyModulation(0);
	waveform1.phaseModulation(900);
	waveform2.frequencyModulation(0);
	waveform2.phaseModulation(900);
	waveform3.frequencyModulation(0);
	waveform3.phaseModulation(900);
	waveform4.frequencyModulation(0);
	waveform4.phaseModulation(900);
	waveform5.frequencyModulation(0);
	waveform5.phaseModulation(900);
	waveform6.frequencyModulation(0);
	waveform6.phaseModulation(900);
	waveform7.frequencyModulation(0);
	waveform7.phaseModulation(900);
	waveform8.frequencyModulation(0);
	waveform8.phaseModulation(900);





	modulator1.begin(fm_knob / 4, mod_index * voicefreq[0], current_modwaveform);
	modulator2.begin(fm_knob / 4, mod_index * voicefreq[1], current_modwaveform);
	modulator3.begin(fm_knob / 4, mod_index * voicefreq[2], current_modwaveform);
	modulator4.begin(fm_knob / 4, mod_index * voicefreq[3], current_modwaveform);
	modulator5.begin(fm_knob / 4, mod_index * voicefreq[4], current_modwaveform);
	modulator6.begin(fm_knob / 4, mod_index * voicefreq[5], current_modwaveform);
	modulator7.begin(fm_knob / 4, mod_index * voicefreq[6], current_modwaveform);
	modulator8.begin(fm_knob / 4, mod_index * voicefreq[7], current_modwaveform);

	modulator1.frequencyModulation(0);
	modulator1.phaseModulation(900);
	modulator2.frequencyModulation(0);
	modulator2.phaseModulation(900);
	modulator3.frequencyModulation(0);
	modulator3.phaseModulation(900);
	modulator4.frequencyModulation(0);
	modulator4.phaseModulation(900);
	modulator5.frequencyModulation(0);
	modulator5.phaseModulation(900);
	modulator6.frequencyModulation(0);
	modulator6.phaseModulation(900);
	modulator7.frequencyModulation(0);
	modulator7.phaseModulation(900);
	modulator8.frequencyModulation(0);
	modulator8.phaseModulation(900);

	amp1.gain(fmfeed_knob / 2);
	amp2.gain(fmfeed_knob / 2);
	amp3.gain(fmfeed_knob / 2);
	amp4.gain(fmfeed_knob / 2);
	amp5.gain(fmfeed_knob / 2);
	amp6.gain(fmfeed_knob / 2);
	amp7.gain(fmfeed_knob / 2);
	amp8.gain(fmfeed_knob / 2);



	//mixers for first pair of 8 voices
	mixer1.gain(0, 0.8);
	mixer1.gain(1, 0.8);
	mixer1.gain(2, 0.8);
	mixer1.gain(3, 0.8);
	mixer2.gain(0, 0.8);
	mixer2.gain(1, 0.8);
	mixer2.gain(2, 0.8);
	mixer2.gain(3, 0.8);
	//mixers for pair of 8 strings
	mixer3.gain(0, 0.6);
	mixer3.gain(1, 0.6);
	mixer3.gain(2, 0.6);
	mixer3.gain(3, 0.6);
	mixer4.gain(0, 0.6);
	mixer4.gain(1, 0.6);
	mixer4.gain(2, 0.6);
	mixer4.gain(3, 0.6);


	//final mixer
	mixer5.gain(0, sel_osc);
	mixer5.gain(1, sel_osc);
	mixer5.gain(2, sel_strings);
	mixer5.gain(3, sel_strings);

	modenvelope1.sustain(1);
	modenvelope2.sustain(1);
	modenvelope3.sustain(1);
	modenvelope4.sustain(1);
	modenvelope5.sustain(1);
	modenvelope6.sustain(1);
	modenvelope7.sustain(1);
	modenvelope8.sustain(1);
	modenvelope1.attack(att_knob);
	modenvelope2.attack(att_knob);
	modenvelope3.attack(att_knob);
	modenvelope4.attack(att_knob);
	modenvelope5.attack(att_knob);
	modenvelope6.attack(att_knob);
	modenvelope7.attack(att_knob);
	modenvelope8.attack(att_knob);


	modenvelope1.release(dec_knob * 2000);
	modenvelope2.release(dec_knob * 2000);
	modenvelope3.release(dec_knob * 2000);
	modenvelope4.release(dec_knob * 2000);
	modenvelope5.release(dec_knob * 2000);
	modenvelope6.release(dec_knob * 2000);
	modenvelope7.release(dec_knob * 2000);
	modenvelope8.release(dec_knob * 2000);


	modenvelope1.hold(0);
	modenvelope2.hold(0);
	modenvelope3.hold(0);
	modenvelope4.hold(0);
	modenvelope5.hold(0);
	modenvelope6.hold(0);
	modenvelope7.hold(0);
	modenvelope8.hold(0);


	modenvelope1.delay(0);
	modenvelope2.delay(0);
	modenvelope3.delay(0);
	modenvelope4.delay(0);
	modenvelope5.delay(0);
	modenvelope6.delay(0);
	modenvelope7.delay(0);
	modenvelope8.delay(0);


	envelope1.sustain(1);
	envelope2.sustain(1);
	envelope3.sustain(1);
	envelope4.sustain(1);
	envelope5.sustain(1);
	envelope6.sustain(1);
	envelope7.sustain(1);
	envelope8.sustain(1);

	envelope9.sustain(0);
	envelope10.sustain(0);
	envelope11.sustain(0);
	envelope12.sustain(0);
	envelope13.sustain(0);
	envelope14.sustain(0);
	envelope15.sustain(0);
	envelope16.sustain(0);

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
	envelope11.attack(att_knob);
	envelope12.attack(att_knob);
	envelope13.attack(att_knob);
	envelope14.attack(att_knob);
	envelope15.attack(att_knob);
	envelope16.attack(att_knob);
	envelope1.release(2000 * dec_knob);
	envelope2.release(2000 * dec_knob);
	envelope3.release(2000 * dec_knob);
	envelope4.release(2000 * dec_knob);
	envelope5.release(2000 * dec_knob);
	envelope6.release(2000 * dec_knob);
	envelope7.release(2000 * dec_knob);
	envelope8.release(2000 * dec_knob);
	envelope9.decay(3000 * dec_knob);
	envelope10.decay(3000 * dec_knob);
	envelope11.decay(3000 * dec_knob);
	envelope12.decay(3000 * dec_knob);
	envelope13.decay(3000 * dec_knob);
	envelope14.decay(3000 * dec_knob);
	envelope15.decay(3000 * dec_knob);
	envelope16.decay(3000 * dec_knob);
	envelope1.hold(0);
	envelope2.hold(0);
	envelope3.hold(0);
	envelope4.hold(0);
	envelope5.hold(0);
	envelope6.hold(0);
	envelope7.hold(0);
	envelope8.hold(0);
	envelope9.hold(0);
	envelope10.hold(0);
	envelope11.hold(0);
	envelope12.hold(0);
	envelope13.hold(0);
	envelope14.hold(0);
	envelope15.hold(0);
	envelope16.hold(0);
	envelope1.delay(0);
	envelope2.delay(0);
	envelope3.delay(0);
	envelope4.delay(0);
	envelope5.delay(0);
	envelope6.delay(0);
	envelope7.delay(0);
	envelope8.delay(0);
	envelope9.delay(0);
	envelope10.delay(0);
	envelope11.delay(0);
	envelope12.delay(0);
	envelope13.delay(0);
	envelope14.delay(0);
	envelope15.delay(0);
	envelope16.delay(0);
	AudioInterrupts();
}
