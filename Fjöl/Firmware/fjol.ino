#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include "settings.h"
#include <Bounce2.h>
#include <Arduino.h>
#include "U8glib.h"
#include <Encoder.h>

/// GUItool: begin automatically generated code
AudioSynthWaveformModulated mod21;          //xy=66,151
AudioSynthWaveformModulated mod22;          //xy=66,211
AudioSynthWaveformModulated mod23;          //xy=66,261
AudioSynthWaveformModulated mod24;          //xy=66,319
AudioEffectEnvelope      modenv21; //xy=237,151
AudioEffectEnvelope      modenv24; //xy=237,317
AudioEffectEnvelope      modenv22; //xy=239,210
AudioEffectEnvelope      modenv23; //xy=240,262
AudioSynthWaveform       lfo1;      //xy=384,482
AudioSynthWaveformDc     dc1;            //xy=393,425
AudioSynthWaveformModulated mod4;           //xy=447,312
AudioSynthWaveformModulated mod1;           //xy=450,153
AudioSynthWaveformModulated mod2;           //xy=450,207
AudioSynthWaveformModulated mod3;           //xy=452,257
AudioMixer4              pwmmod;         //xy=554,468
AudioEffectEnvelope      modenv4; //xy=589,310
AudioEffectEnvelope      modenv1; //xy=590,156
AudioEffectEnvelope      modenv2; //xy=591,209
AudioEffectEnvelope      modenv3; //xy=591,260
AudioSynthWaveformPWM    pwm1;           //xy=728,399
AudioSynthWaveformPWM    pwm2; //xy=728,443
AudioSynthWaveformPWM    pwm3; //xy=728,487
AudioSynthWaveformModulated fm4;            //xy=730,311
AudioSynthWaveformModulated fm2;            //xy=732,213
AudioSynthWaveformModulated fm3;            //xy=732,259
AudioSynthWaveformPWM    pwm4; //xy=731,532
AudioSynthWaveformModulated wave1;          //xy=731,630
AudioSynthWaveformModulated fm1;            //xy=734,159
AudioSynthWaveformModulated wave2;          //xy=733,680
AudioSynthWaveformModulated wave3;          //xy=739,733
AudioSynthWaveformModulated wave4;          //xy=740,787
AudioMixer4              voice1;         //xy=1131,255
AudioMixer4              voice2;         //xy=1131,329
AudioMixer4              voice3;         //xy=1132,402
AudioMixer4              voice4;         //xy=1133,473
AudioEffectEnvelope      envelope2;      //xy=1339,338
AudioEffectEnvelope      envelope3; //xy=1340,381
AudioEffectEnvelope      envelope1;      //xy=1341,291
AudioEffectEnvelope      envelope4; //xy=1342,427
AudioMixer4              left;           //xy=1579,316
AudioMixer4              right;          //xy=1581,395
AudioOutputI2S           i2s1;           //xy=1721,352
AudioConnection          patchCord1(mod21, modenv21);
AudioConnection          patchCord2(mod22, modenv22);
AudioConnection          patchCord3(mod23, modenv23);
AudioConnection          patchCord4(mod24, modenv24);
AudioConnection          patchCord5(modenv21, 0, mod1, 0);
AudioConnection          patchCord6(modenv24, 0, mod4, 0);
AudioConnection          patchCord7(modenv22, 0, mod2, 0);
AudioConnection          patchCord8(modenv23, 0, mod3, 0);
AudioConnection          patchCord9(lfo1, 0, pwmmod, 1);
AudioConnection          patchCord10(dc1, 0, pwmmod, 0);
AudioConnection          patchCord11(mod4, modenv4);
AudioConnection          patchCord12(mod1, modenv1);
AudioConnection          patchCord13(mod2, modenv2);
AudioConnection          patchCord14(mod3, modenv3);
AudioConnection          patchCord15(pwmmod, pwm1);
AudioConnection          patchCord16(pwmmod, pwm2);
AudioConnection          patchCord17(pwmmod, pwm3);
AudioConnection          patchCord18(pwmmod, pwm4);
AudioConnection          patchCord19(modenv4, 0, fm4, 0);
AudioConnection          patchCord20(modenv1, 0, fm1, 0);
AudioConnection          patchCord21(modenv2, 0, fm2, 0);
AudioConnection          patchCord22(modenv3, 0, fm3, 0);
AudioConnection          patchCord23(pwm1, 0, voice1, 1);
AudioConnection          patchCord24(pwm2, 0, voice2, 1);
AudioConnection          patchCord25(pwm3, 0, voice3, 1);
AudioConnection          patchCord26(fm4, 0, voice4, 0);
AudioConnection          patchCord27(fm2, 0, voice2, 0);
AudioConnection          patchCord28(fm3, 0, voice3, 0);
AudioConnection          patchCord29(pwm4, 0, voice4, 1);
AudioConnection          patchCord30(wave1, 0, voice1, 2);
AudioConnection          patchCord31(fm1, 0, voice1, 0);
AudioConnection          patchCord32(wave2, 0, voice2, 2);
AudioConnection          patchCord33(wave3, 0, voice3, 2);
AudioConnection          patchCord34(wave4, 0, voice4, 2);
AudioConnection          patchCord35(voice1, envelope1);
AudioConnection          patchCord36(voice2, envelope2);
AudioConnection          patchCord37(voice3, envelope3);
AudioConnection          patchCord38(voice4, envelope4);
AudioConnection          patchCord39(envelope2, 0, left, 1);
AudioConnection          patchCord40(envelope2, 0, right, 1);
AudioConnection          patchCord41(envelope3, 0, left, 2);
AudioConnection          patchCord42(envelope3, 0, right, 2);
AudioConnection          patchCord43(envelope1, 0, left, 0);
AudioConnection          patchCord44(envelope1, 0, right, 0);
AudioConnection          patchCord45(envelope4, 0, left, 3);
AudioConnection          patchCord46(envelope4, 0, right, 3);
AudioConnection          patchCord47(left, 0, i2s1, 0);
AudioConnection          patchCord48(right, 0, i2s1, 1);
// GUItool: end automatically generated code


void setup()
{
}

void loop()
{
  
}

