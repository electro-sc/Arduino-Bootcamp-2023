#include <DHT.h>            //include the DHT library

#define DHTPIN 2            //DHT's signal pin is connected to pin 2

#define DHTTYPE DHT11       //DHT type used is DHT11, you can use DHT22

DHT dht(DHTPIN, DHTTYPE);   //define the DHT variable with the name 'dht'

void setup() {
  Serial.begin(9600);                //initialize the Serial at the baud rate of 9600
  Serial.println(F("DHTxx test!"));

  dht.begin();         //initialize the DHT sensor

  delay(1500);         //wait a second and half
}

void loop() {
  
  float h = dht.readHumidity();       // read the temerature value
  float t = dht.readTemperature();    // read the humidity value

  if (isnan(h) || isnan(t) || isnan(f)) {                  //isnan means "is not a number"
    Serial.println(F("Failed to read from DHT sensor!"));  // print it if the dht sensor was disconnected 
    return;
  }
  
  Serial.print("Temperature= ");            // printing the temperature
  Serial.println(t);

  Serial.print("Humidity= ");              // printing the humudity
  Serial.print(h);
}
