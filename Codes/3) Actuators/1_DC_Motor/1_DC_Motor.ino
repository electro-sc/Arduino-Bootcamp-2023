int motor1_in1 = 9, motor1_in2 = 10;   //motor pins' controller are connected to pin 9 and 10
int motor1_enable = 8;                 //enable pin is connected to pin 8

void setup() {
  pinMode(motor1_in1, OUTPUT);      //set the pin 8, 9, and 10 as output
  pinMode(motor1_in2, OUTPUT);
  pinMode(motor1_enable, OUTPUT);
  digitalWrite(motor1_enable, 1);   //set the pin 8 high
}

void loop() {
  //the motor is turning in the forward direction for one second
  digitalWrite(motor1_in1, HIGH);
  digitalWrite(motor1_in2, LOW);
  delay(1000);

  //stopping the motor for one second
  digitalWrite(motor1_in1, LOW);
  digitalWrite(motor1_in2, LOW);
  delay(1000);

  //the motor is turning in the backward direction for one second
  digitalWrite(motor1_in1, LOW);
  digitalWrite(motor1_in2, HIGH);
  delay(1000);

  //stopping the motor for one second
  digitalWrite(motor1_in1, LOW);
  digitalWrite(motor1_in2, LOW);
  delay(1000);
}
