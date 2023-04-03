#include <SoftwareSerial.h>             //include the SoftwareSerial library

SoftwareSerial Bluetooth(10, 11);     // (RX, TX), our new RX is in pin 10 and our new TX is in pin 11
char phone;

void setup() {
  Serial.begin(9600);       //initialize the serial at the baud rate of 9600
  Bluetooth.begin(9600);    //initialize the bluetooth's serial at the baud rate of 9600
  pinMode(7,OUTPUT);        //initialize the pin 7 as output
}

void loop() {

  while (Bluetooth.available() > 0)   //check if Bluetooth's Serial is receiving something
  {

    phone = Bluetooth.read();     //read the value received from the bluetooth
    Serial.println(phone);        //send the value by Serial Monitor

    
    if (phone == 'y')             //check if the data received is the character 'y'
    {
      digitalWrite(7,HIGH);       //if it's true the pin 7 will turn on (high)
      Serial.println("LED ON");   //printing the string "LED ON" in Serial Monitor
    }

    
    else if (phone == 'z')        //check if the data received is the character 'z'
    {
      digitalWrite(7,LOW);        //if it's true the pin 7 will turn on (high)
      Serial.println("LED OFF");  // printing the string "LED OFF" in Serial Monitor
    }
  }

}
