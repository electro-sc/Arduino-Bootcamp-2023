#include <Servo.h> //include the servo library

Servo myservo;  // defining a servo variable
void setup() {
  myservo.attach(9); //attaching the servo in the pin 9
}

void loop() {
  myservo.write(0);  // telling the servo to go to 0 degree
  delay(1000);

  myservo.write(90);  // telling the servo to go to 90 degree
  delay(1000);

  myservo.write(180);  // telling the servo to go to 180 degree
  delay(1000);
}
