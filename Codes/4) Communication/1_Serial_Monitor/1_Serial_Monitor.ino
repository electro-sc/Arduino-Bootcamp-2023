int potentiometer_value;    //declaring a variable to store the value of the resistor in

void setup() {
  Serial.begin(9600);      //initialize the serial at the baud rate of 9600
}

void loop() {
  potentiometer_value = analogRead(A0);    //read the value of the potentiometer and store the analog value in the variable
  Serial.println(potentiometer_value);     //print the value in Serial Monitor
  delay(500);  //wait for a half second
} 
