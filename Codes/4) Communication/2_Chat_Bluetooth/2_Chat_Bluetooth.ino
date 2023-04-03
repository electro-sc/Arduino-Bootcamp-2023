#include <SoftwareSerial.h>    //include the SoftwareSerial library

SoftwareSerial Bluetooth(10, 11);   // (RX, TX), our new RX is in pin 10 and our new TX is in pin 11
char pc,phone;

void setup() {
  Serial.begin(9600);          //initialize the serial at the baud rate of 9600
  Bluetooth.begin(9600);       //initialize the bluetooth's serial at the baud rate of 9600
}

void loop() {
  while (Serial.available() > 0)     //check if Serial Monitor is receiving something
  {
    pc = Serial.read();              //read the value received from the serial
    Bluetooth.println(pc);           //send the value by bluetooth's serial
  }


  while (Bluetooth.available() > 0)  //check if Bluetooth's Serial is receiving something
  {
    phone = Bluetooth.read();        //read the value received from the bluetooth
    Serial.println(phone);           //send the value by Serial Monitor
  }

}
