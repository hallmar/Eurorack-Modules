#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            i2s1;           //xy=596.0000495910645,245.00000667572021
AudioOutputUSB           usb1;           //xy=717.0000190734863,244.00004768371582
AudioConnection          patchCord1(i2s1, 0, usb1, 0);
AudioConnection          patchCord2(i2s1, 1, usb1, 1);
// GUItool: end automatically generated code
const short rst = 15;


void setup()
{
	pinMode(rst, OUTPUT);
 digitalWrite(rst,LOW);
 delay(1);
  digitalWrite(rst,HIGH);
	AudioMemory(40);
}

// Add the main program code into the continuous loop() function
void loop()
{
  
	//no code required here

}