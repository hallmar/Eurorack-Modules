#ifndef variables_h

#define variables_h

#include "Arduino.h"

#define WAVEFORM_SINE              0
#define WAVEFORM_SAWTOOTH          1
#define WAVEFORM_SQUARE            2
#define WAVEFORM_TRIANGLE          3
#define WAVEFORM_ARBITRARY         4
#define WAVEFORM_PULSE             5
#define WAVEFORM_SAWTOOTH_REVERSE  6
#define WAVEFORM_SAMPLE_HOLD       7
#define WAVEFORM_TRIANGLE_VARIABLE 8

#define green                       0
#define red                         1

#define noteon                      0
#define noteoff                      1

//start variable to read from pots and ect
extern bool start;



//-------Calibration values------
extern uint8_t lowerpm1;
extern uint16_t upperpm1;

extern uint8_t lowerfm2;
extern uint16_t upperfm2;

extern uint8_t lowerratio1;
extern uint16_t upperratio1;

extern uint8_t lowerratio2;
extern uint16_t upperratio2;

extern uint8_t lowerattack;
extern uint16_t upperattack;

extern uint8_t lowerrelease;
extern uint16_t upperrelease;

extern uint8_t lowerfreq;
extern uint16_t upperfreq;

extern uint8_t lowerctl1;
extern uint16_t upperctl1;

extern uint8_t lowerctl2;
extern uint16_t upperctl2;

extern uint8_t lowerctl3;
extern uint16_t upperctl3;

extern uint16_t calibration_val[20];

//-------led menu variables-----
extern bool led_takeover;


//-------output pins--------
extern bool gate_out;
extern uint8_t gate_out_n;
extern short gate;
extern short gateled;


//------Input pins---------
extern uint8_t button_i;
extern uint8_t enc_button;

extern uint8_t ctl1_enc_a;
extern uint8_t ctl1_enc_b;
extern uint8_t ctl2_enc_a;
extern uint8_t ctl2_enc_b;

extern uint8_t sw2;
extern uint8_t sw1;
extern uint8_t ctl1_sw;
extern uint8_t ctl2_sw;
extern uint8_t midi_sw;

//------analog variables-----
extern float pm1_knob;
extern float pm2_knob;
extern float ratio1_knob;
extern float ratio2_knob;

extern float attack_knob;
extern float release_knob;
extern float freq_knob;
extern float ctl3_knob;

extern float ctl1_cv_value;
extern float ctl2_cv_value;

extern float lfo_value;
//-----constant variables------
extern const short debounce;
extern const short ADCRes;
extern const short ADCbit;
extern const uint8_t activitythreshold;
extern const uint8_t modactivitythreshold;
extern const short ratiosteps;
extern const float ratioindex[18];
extern const float octaveindex[5];
extern const int releasemult;
extern const int attackmult;
extern const float osc1ampmult;
extern const float osc2ampmult;
extern const float pmampmult;
extern const float lfoampmult;
extern float mixerinit;

//-----Midi notes variables-----
extern byte voicenote[4];
extern bool voicetrig[4];
extern uint8_t voicehist[4]; //0th place is newest voice 3rd place is oldest voice
extern uint8_t midichannel;
extern float voicefreq[4];
extern float voicefreqtarget[4];
extern float pbend;
extern int glide;
extern float glidetime;
extern byte glideon; 
extern bool midi_read;
extern byte incoming_note;
extern byte incoming_velocity;
extern uint8_t incoming_channel;

extern bool midi_received;
extern bool learn_active;
//-----Voice settings variables----

extern byte current_op1waveform;
extern byte current_op2waveform;
extern byte current_op3waveform;

extern byte current_osc2waveform; //extra oscillator
extern byte current_osc1waveform; //sub oscillator

extern int phasemod; //sets the amount of degrees an operator can phase modulate another operator

extern uint8_t octave;
extern float voice1panL;
extern float voice1panR;

extern float voice2panL;
extern float voice2panR;

extern float voice3panL;
extern float voice3panR;

extern float voice4panL;
extern float voice4panR;




//-----FM settings values-----
extern float op2_ratio;
extern float op3_ratio;

extern uint8_t algo_select;


extern float param5;
extern float param7;
extern float param8;
extern float param6;


extern float spread;
extern float spread_old;
extern float resonance;
extern float param3;
extern float param4;

 extern float spread_sum;
 extern float resonance_sum;
 extern float param3_sum;
 extern float param4_sum;
 extern float param5_sum;
 extern float param6_sum;
 extern float param7_sum;
 extern float param8_sum;

extern float cv_mod[8];

extern uint8_t op2attack;
extern uint8_t op2decay;
extern uint8_t op2sustain;
extern uint8_t op2release;

extern uint8_t op3attack;
extern uint8_t op3decay;
extern uint8_t op3sustain;
extern uint8_t op3release;

extern uint8_t op1_feedback;
extern uint8_t op2_feedback;
extern uint8_t op3_feedback;

extern uint8_t ctl1_dest;
extern uint8_t ctl2_dest;
extern uint8_t ctl1cv_dest;
extern uint8_t ctl2cv_dest;

extern bool params_changed[8];
extern uint8_t params_index[8];

extern float op2detune;
extern float op3detune;
extern uint8_t detunemult;


extern uint8_t load_preset;
extern uint8_t save_preset;


extern long lastpos_1;
extern long lastpos_2;
extern uint8_t velocity_low;
extern uint8_t velocity_mid; //ms
extern uint8_t velocity_mid_high;
extern uint8_t velocity_high; //ms


extern unsigned long lastmillis1;
extern unsigned long lastmillis2;
extern unsigned long midi_lastmillis;
extern unsigned long calibration_lastmillis;

extern float brightness;
extern int pwm_resolution;


#endif // variables_h
