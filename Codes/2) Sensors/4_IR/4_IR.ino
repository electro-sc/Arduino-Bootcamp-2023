void setup() {
  pinMode(2, INPUT);    //set the pin 2 as input
  Serial.begin(9600);   //initialize the Serial Monitor with the baud rate of 9600
}

void loop() {
  bool value = digitalRead(2);           //read the state of the pin 2 and store it in the variable

  if ( value == 1){                      //check if the state of the pin 2 is high
    Serial.println("Hand Detected!");    //if true, print "Hand Detected" in serial
  }

  else if (value == 0){                  //check if the state of the pin 2 is low
    Serial.println("No Hand Detected!"); //if true, print "No Hand Detected" in serial
  }

  delay(100);   //wait for 100 miliseconds
}
