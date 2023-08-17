#include <Wire.h>//It allows to communicate with I2C devices. 
#include <LiquidCrystal_I2C.h>//It allows communication with alphanumerical liquid crystal displays (LCDs). 
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
lcd.init();//To initialize LCD. 
lcd.begin(16,2);//To start LCD.
lcd.backlight();//To enable backlight. 
lcd.clear();//To clear previous data. 
lcd.setCursor(4,0);//to set the cursor. 
lcd.print("BDU__IOT");//Allows to print. 
}
void loop()
{
}
