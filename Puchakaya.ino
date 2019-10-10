#include <Adafruit_BMP280.h>  
#define BMP280_I2C_ADDRESS  0x76
Adafruit_BMP280  bmp280;
 
void setup(void)
{ Serial.begin(9600);
  delay(1000);  
  Wire.begin(4, 0);
  if( bmp280.begin(BMP280_I2C_ADDRESS) == 0 )
  {  
  }
 
  
  Serial.print("TEMPERATURE:");
  }
 
void loop()
{
  
  float temp     = bmp280.readTemperature();   
  delay(1000);  
  if(temp < 0)
   { 
    Serial.print(" ");}
  else
    Serial.print(temp);
    Serial.print("\n");
}
