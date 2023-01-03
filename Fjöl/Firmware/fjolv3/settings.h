
void noteON(byte note);
void noteOFF(byte note);
void glideval();
void midipanic();

void handleMIDIon(byte channel, byte note, byte velocity);
void handleMIDIoff(byte channel, byte note, byte velocity);
void controlchange(byte channel, byte number, byte value);
void pitchbend(byte channel, int bend);

void initial();
void getorsetsettings(bool getorset, uint8_t preset);

float calcright(float theta);
float calcleft(float theta);
void update_spread();
void update_params(int destination, float value, float mod);
void select_algorithm();

float encoder1_read();
float encoder2_read();
void led_update(uint8_t param);
void led_menu_step(uint8_t number, uint8_t color);
void calibrate();

void setpwm(uint8_t channel, uint8_t pwm);
void startPCA9622();




