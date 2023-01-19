#include "settings.h"
#include "variables.h"

void initial()
{
  Serial.println(String("Spread init:") + spread);
  select_algorithm();
  
   //spread algorithm starts
  float righttemp = calcright( ((spread/200)+0.5)*PI/2 );
  float lefttemp = calcleft( ((spread/200)+0.5)*PI/2 );

  // Serial.println(String("Righttemp:") + righttemp);
  // Serial.println(String("lefttemp:") + lefttemp);
  voice1panL = lefttemp;
  voice1panR = righttemp;
  voice4panR = lefttemp;
  voice4panL = righttemp;
  righttemp = calcright( (( (100-spread)/400 ) +0.25)*PI/2 );
  lefttemp = calcleft( (( (100-spread)/400 )+0.25)*PI/2 );
  // Serial.println(String("Righttemp2:") + righttemp);
  // Serial.println(String("lefttemp2:") + lefttemp);
  voice2panL = lefttemp;
  voice2panR = righttemp;
  voice3panR = lefttemp;
  voice3panL = righttemp;

  AudioNoInterrupts();
  right.gain(0, voice1panR*0.8);
  left.gain(0, voice1panL*0.8);

  right.gain(1,voice2panR*0.8);
  left.gain(1,voice2panL*0.8);

  right.gain(2,voice3panR*0.8);
  left.gain(2,voice3panL*0.8);

  right.gain(3,voice4panR*0.8);
  left.gain(3,voice4panL*0.8);
  //spread algorithm ends

  
  //op1 -> op1
  algomix1.gain(2, param6*2);
  algomix2.gain(2, param6*2);
  algomix3.gain(2, param6*2);
  algomix4.gain(2, param6*2);
  //op2 -> op2
  algomix5.gain(0,param8*0.125);
  algomix6.gain(0,param8*0.125);
  algomix7.gain(0,param8*0.125);
  algomix8.gain(0,param8*0.125);

  ladder1.resonance(resonance);
  ladder2.resonance(resonance);
  ladder1.frequency(1000);
  ladder2.frequency(1000);
  ladder1.octaveControl(4.3);
  ladder2.octaveControl(4.3); //Fcut = 1000*2^(inputsignal*4.3) og inputsignal er frá -1 til 1
  ladder1.inputDrive(1);
  ladder2.inputDrive(1);
  ladder1.interpolationMethod(LADDER_FILTER_INTERPOLATION_FIR_POLY);
  ladder2.interpolationMethod(LADDER_FILTER_INTERPOLATION_FIR_POLY);
  //alternative interpolation method is LADDER_FILTER_INTERPOLATION_LINEAR

  dc3.amplitude(-0.5);
  amp1.gain(2);
  mixer2.gain(0,1);
  mixer2.gain(1,1);
  mixer1.gain(0,1);
  mixer1.gain(1,1);



  op1v1.begin(pmampmult, voicefreq[0], current_op1waveform);
  op1v2.begin(pmampmult, voicefreq[1], current_op1waveform);
  op1v3.begin(pmampmult, voicefreq[2], current_op1waveform);
  op1v4.begin(pmampmult, voicefreq[3], current_op1waveform);

  op2v1.begin(pm1_knob, voicefreq[0], current_op2waveform);
  op2v2.begin(pm1_knob, voicefreq[1], current_op2waveform);
  op2v3.begin(pm1_knob, voicefreq[2], current_op2waveform);
  op2v4.begin(pm1_knob, voicefreq[3], current_op2waveform);

  op3v1.begin(pm2_knob, voicefreq[0], current_op3waveform);
  op3v2.begin(pm2_knob, voicefreq[1], current_op3waveform);
  op3v3.begin(pm2_knob, voicefreq[2], current_op3waveform);
  op3v4.begin(pm2_knob, voicefreq[3], current_op3waveform);




  op2detune = param5 / 10;
  op3detune = param6 / 10;
 

  op1v1.frequencyModulation(0);
  op1v1.phaseModulation(phasemod);
  op1v2.frequencyModulation(0);
  op1v2.phaseModulation(phasemod);
  op1v3.frequencyModulation(0);
  op1v3.phaseModulation(phasemod);
  op1v4.frequencyModulation(0);
  op1v4.phaseModulation(phasemod);

  op2v1.frequencyModulation(0);
  op2v1.phaseModulation(phasemod);
  op2v2.frequencyModulation(0);
  op2v2.phaseModulation(phasemod);
  op2v3.frequencyModulation(0);
  op2v3.phaseModulation(phasemod);
  op2v4.frequencyModulation(0);
  op2v4.phaseModulation(phasemod);

  op3v1.frequencyModulation(0);
  op3v1.phaseModulation(phasemod);
  op3v2.frequencyModulation(0);
  op3v2.phaseModulation(phasemod);
  op3v3.frequencyModulation(0);
  op3v3.phaseModulation(phasemod);
  op3v4.frequencyModulation(0);
  op3v4.phaseModulation(phasemod);

  envelope1.sustain(1);
  envelope2.sustain(1);
  envelope3.sustain(1);
  envelope4.sustain(1);
  filtenv.sustain(1);
  
  op2env1.sustain(1);
  op2env2.sustain(1);
  op2env3.sustain(1);
  op2env4.sustain(1);
  op3env1.sustain(1);
  op3env2.sustain(1);
  op3env3.sustain(1);
  op3env4.sustain(1);

  envelope1.attack(attack_knob* 1000);
  envelope2.attack(attack_knob* 1000);
  envelope3.attack(attack_knob* 1000);
  envelope4.attack(attack_knob* 1000);
  filtenv.attack(0);

  op2env1.attack(attack_knob * 1000);
  op2env2.attack(attack_knob * 1000);
  op2env3.attack(attack_knob * 1000);
  op2env4.attack(attack_knob * 1000);

  op3env1.attack(attack_knob * 1000);
  op3env2.attack(attack_knob * 1000);
  op3env3.attack(attack_knob * 1000);
  op3env4.attack(attack_knob * 1000);

  envelope1.release(releasemult * release_knob);
  envelope2.release(releasemult * release_knob);
  envelope3.release(releasemult * release_knob);
  envelope4.release(releasemult * release_knob);
  filtenv.release(releasemult * param3);

  op2env1.release(release_knob * releasemult);
  op2env2.release(release_knob * releasemult);
  op2env3.release(release_knob * releasemult);
  op2env4.release(release_knob * releasemult);

  op3env1.release(release_knob * releasemult);
  op3env2.release(release_knob * releasemult);
  op3env3.release(release_knob * releasemult);
  op3env4.release(release_knob * releasemult);

  envelope1.hold(0);
  envelope2.hold(0);
  envelope3.hold(0);
  envelope4.hold(0);
  op2env1.hold(0);
  op2env2.hold(0);
  op2env3.hold(0);
  op2env4.hold(0);
  op3env1.hold(0);
  op3env2.hold(0);
  op3env3.hold(0);
  op3env4.hold(0);
  filtenv.hold(0);

  envelope1.delay(0);
  envelope2.delay(0);
  envelope3.delay(0);
  envelope4.delay(0);
  op2env1.delay(0);
  op2env2.delay(0);
  op2env3.delay(0);
  op2env4.delay(0);
  op3env1.delay(0);
  op3env2.delay(0);
  op3env3.delay(0);
  op3env4.delay(0);
  filtenv.delay(0);



  voice1.gain(0, mixerinit);



  voice2.gain(0, mixerinit);



  voice3.gain(0, mixerinit);


  voice4.gain(0, mixerinit);




  AudioInterrupts();
}
