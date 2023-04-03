int intensity = 0;      // declare a variable and store 0 in it

void setup() {
  pinMode(6, OUTPUT);   // set the pin 6 as OUTPUT
}

void loop() {
  intensity = intensity + 1;  // increase the value of "intensity" variable with 1
  analogWrite(6, intensity);  // set the LED brightness depending on the intensity value
  delay(10);  // wait for 10 miliseconds

  if (intensity == 255){
    intensity = 0;
  }
}
