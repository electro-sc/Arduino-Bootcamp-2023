void setup() {
  Serial.begin(9600);  // Initialize the serial baud rate to 9600
}

void loop() {
  Serial.println("Hello, World");  // printing the phrase << Hello, World >> and jump to the next line
  delay(1000);    // Wait for one second
}
