void setup() {
  pinMode(13, OUTPUT);  // set the pin 13 as OUTPUT
  pinMode(2, INPUT);    // set the pin 2 as INPUT
}

void loop() {

  bool switch_state = digitalRead(2);  // store the state of the button in the "switch_state" variable

  if ( switch_state == 1 ){
    digitalWrite(13, 1);     // turn the pin 13 on if the button's state was 1
  }

  else if ( switch_state == 0 ){
    digitalWrite(13, 0);     // turn the pin 13 off if the button's state was 0
  }

}
