void setup() {
  pinMode(13, OUTPUT);  // make the pin 13 as OUTPUT
}

void loop() {
  digitalWrite(13, 1);  // set the pin 13 HIGH (turn on)
  delay(1000);          // wait for one second
  digitalWrite(13, 0);  // set the pin 13 LOW (turn off)
  delay(1000);          // wait for one second
}
