#include "settings.h"
#include "variables.h"


float midi_notes_et[127] = { 8.66196	, 9.17702	, 9.72272	, 10.30086	, 10.91338	, 11.56233	, 12.24986
                          , 12.97827	, 13.75000	, 14.56762	, 15.43385	, 16.35160	, 17.32391	, 18.35405	, 19.44544
                          , 20.60172	, 21.82676	, 23.12465	, 24.49971	, 25.95654	, 27.50000	, 29.13524	, 30.86771
                          , 32.70320	, 34.64783	, 36.70810	, 38.89087	, 41.20344	, 43.65353	, 46.24930	, 48.99943
                          , 51.91309	, 55.00000	, 58.27047	, 61.73541	, 65.40639	, 69.29566	, 73.41619	, 77.78175
                          , 82.40689	, 87.30706	, 92.49861	, 97.99886	, 103.82617	, 110.00000	, 116.54094	, 123.47083
                          , 130.81278	, 138.59132	, 146.83238	, 155.56349	, 164.81378	, 174.61412	, 184.99721	, 195.99772
                          , 207.65235	, 220.00000	, 233.08188	, 246.94165	, 261.62557	, 277.18263	, 293.66477	, 311.12698
                          , 329.62756	, 349.22823	, 369.99442	, 391.99544	, 415.30470	, 440.00000	, 466.16376	, 493.88330
                          , 523.25113	, 554.36526	, 587.32954	, 622.25397	, 659.25511	, 698.45646	, 739.98885	, 783.99087
                          , 830.60940	, 880.00000	, 932.32752	, 987.76660	, 1046.50226	, 1108.73052	, 1174.65907	, 1244.50793
                          , 1318.51023	, 1396.91293	, 1479.97769	, 1567.98174	, 1661.21879	, 1760.00000	, 1864.65505	, 1975.53321
                          , 2093.00452	, 2217.46105	, 2349.31814	, 2489.01587	, 2637.02046	, 2793.82585	, 2959.95538	, 3135.96349
                          , 3322.43758	, 3520.00000	, 3729.31009	, 3951.06641	, 4186.00904	, 4434.92210	, 4698.63629	, 4978.03174
                          , 5274.04091	, 5587.65170	, 5919.91076	, 6271.92698	, 6644.87516	, 7040.00000	, 7458.62018	, 7902.13282
                          , 8372.01809	, 8869.84419	, 9397.27257	, 9956.06348	, 10548.08182	, 11175.30341	, 11839.82153	, 12543.85395
                        };

float midi_notes_py[127] = {
8.7083333,
9.1666667,
9.8214286,
10.3125000,
11.0491071,
11.6015625,
12.2460938,
13.0625000,
13.7500000,
14.7321429,
15.4687500,
16.3281250,
17.4166667,
18.3333333,
19.6428571,
20.6250000,
22.0982143,
23.2031250,
24.4921875,
26.1250000,
27.5000000,
29.4642857,
30.9375000,
32.6562500,
34.8333333,
36.6666667,
39.2857143,
41.2500000,
44.1964286,
46.4062500,
48.9843750,
52.2500000,
55.0000000,
58.9285714,
61.8750000,
65.3125000,
69.6666667,
73.3333333,
78.5714286,
82.5000000,
88.3928571,
92.8125000,
97.9687500,
104.5000000,
110.0000000,
117.8571429,
123.7500000,
130.6250000,
139.3333333,
146.6666667,
157.1428571,
165.0000000,
176.7857143,
185.6250000,
195.9375000,
209.0000000,
220.0000000,
235.7142857,
247.5000000,
261.2500000,
278.6666667,
293.3333333,
314.2857143,
330.0000000,
353.5714286,
371.2500000,
391.8750000,
418.0000000,
440.0000000,
471.4285714,
495.0000000,
522.5000000,
557.3333333,
586.6666667,
628.5714286,
660.0000000,
707.1428571,
742.5000000,
783.7500000,
836.0000000,
880.0000000,
942.8571429,
990.0000000,
1045.0000000,
1114.6666667,
1173.3333333,
1257.1428571,
1320.0000000,
1414.2857143,
1485.0000000,
1567.5000000,
1672.0000000,
1760.0000000,
1885.7142857,
1980.0000000,
2090.0000000,
2229.3333333,
2346.6666667,
2514.2857143,
2640.0000000,
2828.5714286,
2970.0000000,
3135.0000000,
3344.0000000,
3520.0000000,
3771.4285714,
3960.0000000,
4180.0000000,
4458.6666667,
4693.3333333,
5028.5714286,
5280.0000000,
5657.1428571,
5940.0000000,
6270.0000000,
6688.0000000,
7040.0000000,
7542.8571429,
7920.0000000,
8360.0000000,
8917.3333333,
9386.6666667,
10057.1428571,
10560.0000000,
11314.2857143,
11880.0000000,
12540.0000000
};

void noteOFF(byte note)
{

  if ((voicetrig[0] == 1) && (note == voicenote[0]))
  {
    AudioNoInterrupts();
    envelope1.noteOff();
    op2env1.noteOff();
    op3env1.noteOff();
    AudioInterrupts();
    voicetrig[0] = 0;
  }
  if ((voicetrig[1] == 1) && (note == voicenote[1]))
  {
    AudioNoInterrupts();
    envelope2.noteOff();
    op2env2.noteOff();
    op3env2.noteOff();
    AudioInterrupts();
    voicetrig[1] = 0;
  }
  if ((voicetrig[2] == 1) && (note == voicenote[2]))
  {
    AudioNoInterrupts();
    envelope3.noteOff();
    op2env3.noteOff();
    op3env3.noteOff();
    AudioInterrupts();
    voicetrig[2] = 0;
  }
  if ((voicetrig[3] == 1) && (note == voicenote[3]))
  {
    AudioNoInterrupts();
    envelope4.noteOff();
    op2env4.noteOff();
    op3env4.noteOff();
    AudioInterrupts();
    voicetrig[3] = 0;
  }

   if (gate_out && voicetrig[0] == 0 && voicetrig[1] == 0 && voicetrig[2] == 0 && voicetrig[3] == 0 )
  {
    gate_out = 0;
    digitalWrite(gate, HIGH);
    digitalWrite(gateled,LOW);
    filtenv.noteOff();
    //Serial.println(String("Gate = ") + gate_out);
  }

}


void noteON(byte note)
{
  float freq_note = midi_notes_et[note - 1] * pbend * octaveindex[octave];
  uint8_t temp;
  if (!gate_out)
  {
    gate_out = 1;
    digitalWrite(gate, LOW);
    digitalWrite(gateled, HIGH);
    filtenv.noteOn();
    gate_out_n = note;
    //Serial.println(String("Gate = ") + gate_out);
  }

  if (voicehist[0] == 1 && !voicetrig[0])
  {
    voicenote[0] = note;
    voicetrig[0] = 1;
    //shift voicehistory by 1 to the left
    temp = voicehist[3];
    voicehist[3] = voicehist[2];
    voicehist[2] = voicehist[1];
    voicehist[1] = voicehist[0];
    voicehist[0] = temp;
    voicefreqtarget[0] = freq_note;
    AudioNoInterrupts();
    envelope1.noteOn();
    op2env1.noteOn();
    op3env1.noteOn();
    AudioInterrupts();
    return;
  }

  if (voicehist[0] == 2 && !voicetrig[1])
  {
    voicenote[1] = note;
    voicetrig[1] = 1;
    //shift voicehistory by 1 to the left
    temp = voicehist[3];
    voicehist[3] = voicehist[2];
    voicehist[2] = voicehist[1];
    voicehist[1] = voicehist[0];
    voicehist[0] = temp;
    voicefreqtarget[1] = freq_note;
    
    AudioNoInterrupts();
    envelope2.noteOn();
    op2env2.noteOn();
    op3env2.noteOn();

    AudioInterrupts();
    return;

  }

  if (voicehist[0] == 3  && !voicetrig[2])
  {
    voicenote[2] = note;
    voicetrig[2] = 1;
    //shift voicehistory by 1 to the left
    temp = voicehist[3];
    voicehist[3] = voicehist[2];
    voicehist[2] = voicehist[1];
    voicehist[1] = voicehist[0];
    voicehist[0] = temp;
    voicefreqtarget[2] = freq_note;
    
    AudioNoInterrupts();
    envelope3.noteOn();
    op2env3.noteOn();
    op3env3.noteOn();
    AudioInterrupts();
    return;


  }

  if (voicehist[0] == 4  && !voicetrig[3])
  {
    voicenote[3] = note;
    voicetrig[3] = 1;
    //shift voicehistory by 1 to the left
    temp = voicehist[3];
    voicehist[3] = voicehist[2];
    voicehist[2] = voicehist[1];
    voicehist[1] = voicehist[0];
    voicehist[0] = temp;
    voicefreqtarget[3] = freq_note;
    
    AudioNoInterrupts();
    envelope4.noteOn();
    op2env4.noteOn();
    op3env4.noteOn();
    AudioInterrupts();
    return;

  }
  filtenv.noteOff(); //set filter envelope as a decay envelope.

}
