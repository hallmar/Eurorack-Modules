#include "settings.h"
const float midi_notes[127] = { 8.66196	,9.17702	,9.72272	,10.30086	,10.91338	,11.56233	,12.24986
,12.97827	,13.75000	,14.56762	,15.43385	,16.35160	,17.32391	,18.35405	,19.44544
,20.60172	,21.82676	,23.12465	,24.49971	,25.95654	,27.50000	,29.13524	,30.86771
,32.70320	,34.64783	,36.70810	,38.89087	,41.20344	,43.65353	,46.24930	,48.99943
,51.91309	,55.00000	,58.27047	,61.73541	,65.40639	,69.29566	,73.41619	,77.78175
,82.40689	,87.30706	,92.49861	,97.99886	,103.82617	,110.00000	,116.54094	,123.47083
,130.81278	,138.59132	,146.83238	,155.56349	,164.81378	,174.61412	,184.99721	,195.99772
,207.65235	,220.00000	,233.08188	,246.94165	,261.62557	,277.18263	,293.66477	,311.12698
,329.62756	,349.22823	,369.99442	,391.99544	,415.30470	,440.00000	,466.16376	,493.88330
,523.25113	,554.36526	,587.32954	,622.25397	,659.25511	,698.45646	,739.98885	,783.99087
,830.60940	,880.00000	,932.32752	,987.76660	,1046.50226	,1108.73052	,1174.65907	,1244.50793
,1318.51023	,1396.91293	,1479.97769	,1567.98174	,1661.21879	,1760.00000	,1864.65505	,1975.53321
,2093.00452	,2217.46105	,2349.31814	,2489.01587	,2637.02046	,2793.82585	,2959.95538	,3135.96349
,3322.43758	,3520.00000	,3729.31009	,3951.06641	,4186.00904	,4434.92210	,4698.63629	,4978.03174
,5274.04091	,5587.65170	,5919.91076	,6271.92698	,6644.87516	,7040.00000	,7458.62018	,7902.13282
,8372.01809	,8869.84419	,9397.27257	,9956.06348	,10548.08182	,11175.30341	,11839.82153	,12543.85395 };

void handleMIDIon(byte channel, byte note, byte velocity)
{
	Serial.println(String("Note On:  ch=") + channel + ", note=" + note + ", velocity=" + velocity);
	if (learn_active) {

		midi_channel = channel;
		EEPROM.put(0, midi_channel);
		learn_active = false;
	}

	if (channel == midi_channel) {
		envelopeON(note);
	}
}
void handleMIDIoff(byte channel, byte note, byte velocity)
{
	if (channel == midi_channel)
	{
		Serial.println(String("Note off:  ch=") + channel + ", note=" + note + ", velocity=" + velocity);
		envelopeOFF(note);
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


	if (channel == midi_channel)
	{
		Serial.println(String("Bend:") + bend);
		Serial.println(String("Bended:") + pbend);
		AudioNoInterrupts();
		waveform1.frequency(voicefreq[0] * pbend);
		waveform2.frequency(voicefreq[1] * pbend);
		waveform3.frequency(voicefreq[2] * pbend);
		waveform4.frequency(voicefreq[3] * pbend);
		waveform5.frequency(voicefreq[4] * pbend);
		waveform6.frequency(voicefreq[5] * pbend);
		waveform7.frequency(voicefreq[6] * pbend);
		waveform8.frequency(voicefreq[7] * pbend);
		modulator1.frequency(voicefreq[0] * mod_index * pbend);
		modulator2.frequency(voicefreq[1] * mod_index * pbend);
		modulator3.frequency(voicefreq[2] * mod_index * pbend);
		modulator4.frequency(voicefreq[3] * mod_index * pbend);
		modulator5.frequency(voicefreq[4] * mod_index * pbend);
		modulator6.frequency(voicefreq[5] * mod_index * pbend);
		modulator7.frequency(voicefreq[6] * mod_index * pbend);
		modulator8.frequency(voicefreq[7] * mod_index * pbend);
		AudioInterrupts();
	}
}


