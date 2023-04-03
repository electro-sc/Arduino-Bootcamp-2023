int buzzer = 8;          //buzzer is connected to pin 8
int frequency = 1000;    

void setup(){
  pinMode(buzzer, OUTPUT);    //initialize the pin 8 as output
}

void loop(){
  tone(buzzer, frequency);    //turn the buzzer on with 1kHz signal
  delay(1000);                //wait for one second
  noTone(buzzer);             //turn the buzzer off
  delay(1000);                //wait for one second
}
