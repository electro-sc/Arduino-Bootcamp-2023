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
  for(int positionCounter = 0; positionCounter < 13; positionCounter++){    //counting from 0 to 13
    lcd.scrollDisplayLeft();    //shift the value displayed in LCD to left
    delay(200);   //wait for 200 miliseconds
  }

  for(int positionCounter = 0; positionCounter < 29; positionCounter++){    //counting from 0 to 29
    lcd.scrollDisplayRight();    //shift the value displayed in LCD to right
    delay(200);   //wait for 200 miliseconds
  }

  for(int positionCounter = 0; positionCounter < 16; positionCounter++){    //counting from 0 to 16
    lcd.scrollDisplayLeft();    //shift the value displayed in LCD to left
    delay(200);   //wait for 200 miliseconds
  }
}
