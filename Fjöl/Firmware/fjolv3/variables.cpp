#include "variables.h"

bool start = 1;

//-------Calibration values------
uint8_t lowerpm1 = 0;
uint16_t upperpm1 = 4096;

uint8_t lowerfm2 = 0;
uint16_t upperfm2 = 4096;

uint8_t lowerratio1= 139;
uint16_t upperratio1 = 4096;

uint8_t lowerratio2 = 0;
uint16_t upperratio2 = 4096;

uint8_t lowerattack = 166;
uint16_t upperattack = 4096;

uint8_t lowerrelease = 0;
uint16_t upperrelease = 4096;

uint8_t lowerfreq = 40;
uint16_t upperfreq = 4096;

uint8_t lowerctl1 = 0;
uint16_t upperctl1 = 4006;

uint8_t lowerctl2 = 0;
uint16_t upperctl2 = 4006;

uint8_t lowerctl3 = 80;
uint16_t upperctl3 = 4006;

uint16_t calibration_val[20] = {0, 4095 , 0, 4095 ,0, 4095 ,0, 4095 ,0, 4095 ,0, 4095 ,0, 4095 ,0, 4095 ,};


//-------led menu variables-----
bool led_takeover = 0;


//-------output pins--------
bool gate_out = 0;
uint8_t gate_out_n = 1;
short gate = 11;
short gateled = 39;



//------Input pins---------
uint8_t ctl1_enc_a = 37;
uint8_t ctl1_enc_b = 36;
uint8_t ctl2_enc_a = 35;
uint8_t ctl2_enc_b = 34;

uint8_t sw2 = 10;
uint8_t sw1 = 8;
uint8_t ctl1_sw = 12;
uint8_t ctl2_sw = 33;
uint8_t midi_sw = 32;

//------analog variables-----
float pm1_knob = 0;
float pm2_knob= 0;
float ratio1_knob= 0;
float ratio2_knob= 0;

float attack_knob= 0;
float release_knob= 0;
float freq_knob= 0;
float ctl3_knob= 0;

float ctl1_cv_value= 0;
float ctl2_cv_value= 0;

float lfo_value;
//-----constant variables------
const short debounce = 20;
const short ADCRes = 8192;
const short ADCbit = 13;
const uint8_t activitythreshold = 40;
const uint8_t modactivitythreshold = 80;
const short ratiosteps = 17;
const float ratioindex[18] = { 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6, 6.5, 7, 7.5, 8, 8.5, 9};
const float octaveindex[5] = {0.25,0.5,1,2,3};
const int releasemult = 3000;
const int attackmult = 2000;
const float osc1ampmult = 0.125;
const float osc2ampmult = 0.125;
const float pmampmult = 0.125;
const float lfoampmult = 0.5;
float mixerinit = 0.5;
//-----Midi notes variables-----
byte voicenote[4] = { 0, 0, 0, 0};
bool voicetrig[4] = { 0, 0, 0, 0};
uint8_t voicehist[4] = {4, 3, 2, 1}; //0th place is the oldest voice 3rd place is newest voice
byte midichannel;
float voicefreq[4] = {};
float voicefreqtarget[4] = {};
float pbend = 1;
int glide = 1;
float glidetime = 0;
byte glideon = 0;
bool midi_received = 0;
bool learn_active = 0;
bool midi_read =0;
byte incoming_note = 0;
byte incoming_velocity = 0;
uint8_t incoming_channel = 0;

//-----Voice settings variables----

byte current_op1waveform = WAVEFORM_SINE;
byte current_op2waveform = WAVEFORM_SINE;
byte current_op3waveform = WAVEFORM_SINE;
byte current_osc2waveform = WAVEFORM_PULSE; 
byte current_osc1waveform = WAVEFORM_SAWTOOTH;


int phasemod = 360;

uint8_t octave = 2;

float voice1panL = 0;
float voice1panR = 0;

float voice2panL = 0;
float voice2panR = 0;

float voice3panL = 0;
float voice3panR = 0;

float voice4panL = 0;
float voice4panR = 0;



//-----FM and osc settings values-----
float op2_ratio;
float op3_ratio;

uint8_t algo_select = 1;

float param5 = 0;
float param7 = 0;
float param8 = 0.5;
float param6 = 0;
float spread = 0;
float spread_old = 0;
float resonance = 0;
float param3 = 0;
float param4 = 0;

float spread_sum = 0;
float resonance_sum = 0;
float param3_sum = 0;
float param4_sum = 0;
float param5_sum = 0;
float param6_sum = 0;
float param7_sum = 0;
float param8_sum = 0;

float cv_mod[8] = {0,0,0,0,0,0,0,0};



uint8_t op2attack = 0;
uint8_t op2decay = 0;
uint8_t op2sustain = 0;
uint8_t op2release = 0;

uint8_t op3attack = 0;
uint8_t op3decay = 0;
uint8_t op3sustain = 0;
uint8_t op3release = 0;

uint8_t op1_feedback = 0;
uint8_t op2_feedback = 0;
uint8_t op3_feedback = 0;

uint8_t ctl1_dest = 0;
uint8_t ctl2_dest = 4;
uint8_t ctl1cv_dest = 1;
uint8_t ctl2cv_dest = 2;

bool params_changed[8] = {0,0,0,0,0,0,0,0};
uint8_t params_index[8] = {1,3,5,7,9,11,13,15};

float op2detune = 0;
float op3detune = 0;
uint8_t detunemult = 30;

uint8_t load_preset = 0;
uint8_t save_preset = 0;


long lastpos_1 = 0;
long lastpos_2 = 0;

uint8_t velocity_low = 15;
uint8_t velocity_mid = 10; //ms
uint8_t velocity_mid_high = 5;
uint8_t velocity_high = 1; //ms


unsigned long lastmillis1 = millis();
unsigned long lastmillis2 = millis();

unsigned long midi_lastmillis = 0;
unsigned long calibration_lastmillis = 0;

float brightness = 1;
int pwm_resolution = 255;
