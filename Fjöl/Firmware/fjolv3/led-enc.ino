#include "settings.h"
#include "variables.h"
float encoder1_read()
{
 //setja hér inn accellerated read og þetta encoder read gefur frá sér summu af 
  long newpos_1 = ctl1_enc.read();
  float ctl1 = 0;
  if(newpos_1 < lastpos_1)
  {
      lastpos_1 = newpos_1;
      if(millis()-lastmillis1 < velocity_mid)
      {
        ctl1 = 0.04;
      }
      else if(millis()-lastmillis1 < velocity_low)
      {
        ctl1 = 0.02;
      }
      else 
      {
        ctl1 = 0.01; 
      }
   // ctl1 = 0.01;
    lastmillis1 = millis();
    Serial.println(String("ctl1 value:")+ctl1);
    return ctl1;
   
  }
  else if(newpos_1 > lastpos_1)
  {
      lastpos_1 = newpos_1;
      if(millis()-lastmillis1 < velocity_mid)
      {
        ctl1 = -0.04;
      }
      else if(millis()-lastmillis1 < velocity_low)
      {
        ctl1 = -0.02;
      }
      else 
      {
        ctl1 = -0.01; 
      }
    lastmillis1 = millis();
    Serial.println(String("ctl1 value:")+ctl1);
    return ctl1;
  }
  return 0;
} //enc read endar

float encoder2_read()
{
 //setja hér inn accellerated read og þetta encoder read gefur frá sér summu af 
  long newpos_2 = ctl2_enc.read();
  float ctl2 = 0;
  if(newpos_2 < lastpos_2)
  {
      lastpos_2 = newpos_2;
      
      if(millis()-lastmillis2 < velocity_mid)
      {
        ctl2 = 0.04;
      }
      else if(millis()-lastmillis2 < velocity_high)
      {
        ctl2 = 0.02;
      }
      else 
      {
        ctl2 = 0.01; 
      }
    //ctl2 = 0.01;
    lastmillis2 = millis();
    //Serial.println(String("ctl2 value:")+ctl2);
    return ctl2;
    
  } 
  else if(newpos_2 > lastpos_2)
  {
      lastpos_2 = newpos_2;
       if(millis()-lastmillis2 < velocity_mid)
      {
        ctl2 = -0.04;
      }
      else if(millis()-lastmillis2 < velocity_high)
      {
        ctl2 = -0.02;
      }
      else 
      {
        ctl2 = -0.01; 
      }
      //ctl2 = -0.01;
    lastmillis2 = millis();
    //sSerial.println(String("ctl2 value:")+ctl2);
    return ctl2;
  }
  return 0;
} //enc read endar

void led_update(uint8_t param)
{
    //uppfæra allar leds með analog gildum og hafa flag sem segir þeim að ekki sýna gildin ef það er verið að velja eitthvað annað eins og algorithm?
    //sýna midi channel kannski líka
  switch(param)
  {
    case 0:
      setpwm(0,led_fade(spread/100,green) );
      setpwm(1,led_fade(spread/100,red) );
    break;

    case 1:
      setpwm(2, brightness*led_fade(resonance,green));
      setpwm(3, brightness*led_fade(resonance,red));
    break;

    case 2:
      setpwm(4,brightness*led_fade(param3,green));
      setpwm(5,brightness*led_fade(param3,red));
    break;

    case 3:
      setpwm(6,brightness*led_fade(param4,green));
      setpwm(7,brightness*led_fade(param4,red));
    break;

    case 4:  
      setpwm(8,brightness*led_fade(param5,green));
      setpwm(9,brightness*led_fade(param5,red));
    break;

    case 5:
      setpwm(10,brightness*led_fade(param6,green)); 
      setpwm(11,brightness*led_fade(param6,red));
    break;

    case 6:
      setpwm(12,brightness*led_fade(param7,green));
      setpwm(13,brightness*led_fade(param7,red));
    break;

    case 7:
      setpwm(14,brightness*led_fade(param8,green));
      setpwm(15,brightness*led_fade(param8,red));
    break;

    case 8:
      setpwm(0,led_fade(spread/100,green) );
      setpwm(1,led_fade(spread/100,red) );
  
      setpwm(2,led_fade(resonance,green) );
      setpwm(3,led_fade(resonance,red) );

      setpwm(4,led_fade(param3,green) );
      setpwm(5,led_fade(param3,red) );

      setpwm(6,led_fade(param4,green) );
      setpwm(7,led_fade(param4,red) );

      setpwm(8,led_fade(param5,green));
      setpwm(9,led_fade(param5,red));

      setpwm(10,led_fade(param6,green) ); 
      setpwm(11,led_fade(param6,red) );
 
      setpwm(12,led_fade(param7,green) );
      setpwm(13,led_fade(param7,red) );

      setpwm(14,led_fade(param8,green) );
      setpwm(15,led_fade(param8,red) );
    break;
    
  }
}
void led_menu_step(uint8_t number,uint8_t color, float value) // 0 = grænn 1 = rauðurog 3 er báðir litir
{


  if(color == 1)
  {
    for(int i = 0; i<= 15;i++)
    {
      if(i == params_index[number] )
      {
        setpwm(i,brightness*pwm_resolution);
      }
      else
      {
        setpwm(i,0);
      }
    }
  }
  else
  {
    for(int i = 0; i<= 15;i++)
    {
      if(i == (params_index[number]-1))
      {
        setpwm(i,brightness*pwm_resolution);
      }
      else
      {
        setpwm(i,0);
      }
    }
  }

}

int led_fade (float value, uint8_t color) // 0 = grænn 1 = rauður
{
  
  int gr;
  int rd;
  switch(color)
  {
    case green:
  
       if(value <= 0.5)
      {
        gr = map(value,0,0.5,0,pwm_resolution);
        if(gr > pwm_resolution) gr = pwm_resolution;
        if(gr <= 0) gr = 0;
        return gr;
      }
      else if(value > 0.5 && value <= 1)
      {
        gr = map(value,1,0.5,0,pwm_resolution);
        if(gr > pwm_resolution) gr = pwm_resolution;
        if(gr < 0) gr = 0;
        return gr;
      }  
    break;
    case red:
      rd = map(value, 0.3, 1, 0, pwm_resolution);
      if(rd > pwm_resolution) rd = pwm_resolution;
      if(rd < 0) rd = 0;
      return rd;
    break;
  } //switch endar
  return 0;
}


void setpwm(uint8_t channel, uint8_t pwm)
{
  Wire2.beginTransmission(PCA9622_I2C_ADDRESS);
  Wire2.write(channel+2); //pwm register starts at 0x02
  Wire2.write(pwm);
  Wire2.endTransmission();
}


void startPCA9622()
{
  //start PWM oscillator
  Wire2.beginTransmission(PCA9622_I2C_ADDRESS);
  Wire2.write(PCA9622_I2C_ADDRESS+0x00);
  Wire2.write(0x00);
  Wire2.endTransmission();
  delay(1);
  //set mode2 register to zero
  Wire2.beginTransmission(PCA9622_I2C_ADDRESS);
  Wire2.write(PCA9622_I2C_ADDRESS+0x00);
  Wire2.write(0x00);
  Wire2.endTransmission();
  delay(1);

  //set LEDs to enable PWM output
  Wire2.beginTransmission(PCA9622_I2C_ADDRESS);
  Wire2.write(0x14);
  Wire2.write(0xFF);
  Wire2.endTransmission();
  delay(1);

  Wire2.beginTransmission(PCA9622_I2C_ADDRESS);
  Wire2.write(0x15);
  Wire2.write(0xFF);
  Wire2.endTransmission();
  delay(1);

  Wire2.beginTransmission(PCA9622_I2C_ADDRESS);
  Wire2.write(0x16);
  Wire2.write(0xFF);
  Wire2.endTransmission();
  delay(1);

  Wire2.beginTransmission(PCA9622_I2C_ADDRESS);
  Wire2.write(0x17);
  Wire2.write(0xFF);
  Wire2.endTransmission();
  delay(1);

}