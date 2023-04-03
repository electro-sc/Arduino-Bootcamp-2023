int trigPin = 9;    //trig connector is connected to pin 9
int echoPin = 10;   //echo connector is coonected to pin 10
long duration;
int distance;

void setup() {
  
  Serial.begin(9600);         //initialize the Serial at the baud rate of 9600
  
  pinMode(trigPin, OUTPUT);   //set the trig pin as output
  pinMode(echoPin, INPUT);    //set the echo pin as input
}

void loop() {
  digitalWrite(trigPin, LOW);       //initialize the trig pin to low
  delayMicroseconds(2);             //wait 2 uSeconds
  digitalWrite(trigPin, HIGH);      //give a small pulse to the trig pin
  delayMicroseconds(10);            //wait 10 uSeconds
  digitalWrite(trigPin, LOW);       //turn off the trig pin

  duration = pulseIn(echoPin, HIGH);    //start counting until the echo pin reseive a signal and store the duration in the variable
  distance = duration * 0.034 / 2;      //multiply the duration by the speed of the ultrasound and devide it by 2

  Serial.print("Distance: ");           //print the distance in Serial Monitor
  Serial.println(distance);
}
