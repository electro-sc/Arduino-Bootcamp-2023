#include <LiquidCrystal_I2C.h>   //include the LCD-I2C library

LiquidCrystal_I2C lcd(0x27,16,2);   //defining a new LCD with name 'lcd', I2C address: 0x27, LCD size: 16 colums x 2 lines

void setup()
{
  lcd.begin();           //initialize the lcd variable
  lcd.backlight();      //turn on LCD's backlight
}
void loop()
{
  lcd.clear();             //clear the values printed in the LCD
  lcd.setCursor(2,0);      //set the cursor at the third column and first line
  lcd.print("Electro SC"); //print the string "Electro SC"

  delay(1000);    //wait for a second

  lcd.clear();                   //clear the values printed in the LCD
  lcd.setCursor(0,0);            //set the cursor at the first column and first line
  lcd.print("Arduino Bootcamp"); //print the string "Arduino Bootcamp"
}
