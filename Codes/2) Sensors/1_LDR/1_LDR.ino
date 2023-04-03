void setup() {
  pinMode(A0, INPUT);      // set the pin A0 as INPUT
  Serial.begin(9600);      // set the serial baud rate 9600
}

void loop() {
  int value = analogRead(A0);  // put the value of the pin A0 in the "val" variable
  Serial.println(val);    // printing the value stored in the "val" variable
  delay(100);      // wait for 100 milisecond
}
