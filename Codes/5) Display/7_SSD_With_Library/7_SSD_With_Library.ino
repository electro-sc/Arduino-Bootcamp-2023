/////////////////////////////////////////////////////////////////////////////////

/*
 * Arduino     >>>     SSD
 * D2          >>>     (F)
 * D3          >>>     (G)
 * D4          >>>     (C)
 * D5          >>>     (D)
 * D6          >>>     (E)
 * D7          >>>     (A)
 * D8          >>>     (B)
 * GND         >>>     GND
 */

//////////////////////////////////////////////////////////////////////////////////



#include "SevSeg.h"
SevSeg sevseg;

void setup()
{
  //Set to 1 for single digit display
  byte numDigits = 1;

  //defines common pins while using multi-digit display. Left empty as we have a single digit display
  byte digitPins[] = {};

  //Defines arduino pin connections in order: A, B, C, D, E, F, G, DP
  byte segmentPins[] = {7, 8, 4, 5, 6, 2, 3, 13};
  bool resistorsOnSegments = true;

  //Initialize sevseg object. Uncomment second line if you use common cathode 7 segment
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
  //sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins, resistorsOnSegments);

  sevseg.setBrightness(90);
}

void loop()
{ 
   //Display numbers one by one with 2 seconds delay
   for(int i = 0; i < 10; i++)
   {
     sevseg.setNumber(i);
     sevseg.refreshDisplay(); 
     delay(2000);
   }
}
