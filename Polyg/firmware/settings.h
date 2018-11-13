

void envelopeON(byte note);
void envelopeOFF(byte note);
void handleMIDIon(byte channel, byte note, byte velocity);
void handleMIDIoff(byte channel, byte note, byte velocity);
void changeenvelope();
void changewavesh();
void initial();
void waveformrefresh();
void instrumentrefresh();