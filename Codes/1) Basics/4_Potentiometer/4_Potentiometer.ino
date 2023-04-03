int potPin = A3;        //connecting the signal pin of the potentiometer in pin A3
int ledPin = 4;         //connecting the LED's anode to pin 5
int resolution = 1023;  //ADC range 
int value = 0;          //declaring the potentiometer value's variable

void setup() {
  pinMode(ledPin, OUTPUT);       // set the pin A0 as INPUT
}

void loop() {
  value = analogRead(potPin);  //  store the value of the resistor in the "val" variable
  value = map(value, 0, resolution, 0, 2000);  //change the range of 'value' variable from [0, 1023] to [0,1000]
  digitalWrite(ledPin, HIGH);   //turn the pin 5 on 
  delay(value);                 //wait 'value' time
  digitalWrite(ledPin, LOW);    //turn the pin 5 off
  delay(value);                 //wait 'value' time
}
