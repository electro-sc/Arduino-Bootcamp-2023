/////////////////////////////////////////////////////////////////////////////////

/* Pins Connections

 * Arduino     >>>     SSD
 * D2          >>>     9  (F)
 * D3          >>>     10 (G)
 * D4          >>>     4  (C)
 * D5          >>>     2  (D)
 * D6          >>>     1  (E)
 * D7          >>>     7  (A)
 * D8          >>>     6  (B)
 * GND         >>>     3 & 8

 */

//////////////////////////////////////////////////////////////////////////////////

//pins decalation
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 8;
int g = 9;

void setup() {
  //setting up all the pins as output
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

//defining a function to display a digit
void displayDigit (int digit){
  //Conditions for displaying segment a:
  if(digit !=1 && digit != 4){
    digitalWrite(a,HIGH);
  }
  
  //Conditions for displaying segment b:
  if(digit != 5 && digit != 6){
    digitalWrite(b,HIGH);
  }

  //Conditions for displaying segment c:
  if(digit != 2){
    digitalWrite(c,HIGH);
  }

  //Conditions for displaying segment d:
  if(digit != 1 && digit != 4 && digit != 7){
    digitalWrite(d,HIGH);
  }

  //Conditions for displaying segment e:
  if(digit == 2 || digit == 6 || digit == 8 || digit == 0){
    digitalWrite(e,HIGH);
  }

  //Conditions for displaying segment f:
  if(digit != 1 && digit != 2 && digit != 3 && digit == 7){
    digitalWrite(f,HIGH);
  }

  //Conditions for displaying segment :
  if(digit != 0 && digit != 1 && digit != 7){
    digitalWrite(g,HIGH);
  }
}

//defining a function to turn off all the pins
void turnOff(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void loop() {

  for(int i=0; i<10; i++){   //counting from 0 to 10
    displayDigit(i);         //calling the defined function above and display the digit on the SSD
    delay(1000);          //wait for a second
    turnOff();    //Turn off all the led
  }
}
