#include <Adafruit_BMP280.h>  
#define BMP280_I2C_ADDRESS  0x76
Adafruit_BMP280  bmp280;
 
void setup(void)
{ Serial.begin(115200);
  delay(10);  
  Wire.begin(1, 0);
  if( bmp280.begin(BMP280_I2C_ADDRESS) == 0 )
  {  
  }
 
  
  Serial.print("TEMP:");
  }
 
void loop()
{
  
  float temp     = bmp280.readTemperature();   
  delay(10);  
  if(temp < 0)
   { 
    Serial.print(" ");}
  else
    Serial.print(temp);
    Serial.print("\n");
 ///using the less delay method will increase efficiency
}
