#include <LiquidCrystal_I2C.h>   //include the LCD-I2C library

LiquidCrystal_I2C lcd(0x27,16,2);   //defining a new LCD with name 'lcd', I2C address: 0x27, LCD size: 16 colums x 2 lines

void setup()
{
  lcd.begin();           //initialize the lcd variable
  lcd.backlight();      //turn on LCD's backlight

  lcd.setCursor(3,0);         //set the cursor at the fourth column and first line
  lcd.print("Hello, World");  //print the string "Hello, World"
}
void loop()
{
  lcd.display();      //display the given string 'turn on the pixels)
  delay(1000);        //wait for one second
  lcd.noDisplay();    //clear the printed string (turn off the pixels)
  delay(1000);        //wait for one second
}
