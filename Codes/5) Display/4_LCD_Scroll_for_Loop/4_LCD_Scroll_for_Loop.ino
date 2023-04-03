#include <LiquidCrystal_I2C.h>   //include the LCD-I2C library

LiquidCrystal_I2C lcd(0x27,16,2);   //defining a new LCD with name 'lcd', I2C address: 0x27, LCD size: 16 colums x 2 lines

void setup()
{
  lcd.begin();           //initialize the lcd variable
  lcd.backlight();      //turn on LCD's backlight

    lcd.setCursor(3,0);         //set the cursor at the fourth column and first line
  lcd.print("Hello, World!");  //print the string "Hello, World!"
}
void loop()
{
  for(int i = 15; i>-13; i--){  //counting from 15 down to -13  
    lcd.clear();                //clear the values printed in the LCD
    lcd.setCursor(i,1);         //set the cursor at the i column and second line
    lcd.print("Hello Again!");  //print the string "Hello, World!"
    delay(200);                 //wait for 200 miliseconds
  }
}
