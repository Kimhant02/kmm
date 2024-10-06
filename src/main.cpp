#include <Arduino.h>
#include "module.h"
 int A = 0 ;

void setup() {
    Serial.begin(115200);
    Config_server();
    
    
} 

void loop() {
  
   if (A == 0)
   {
  Serial.println ("Give me A plase....");
  delay(500);
  A = 4 ;
  Serial.print ("A =");
  Serial.println (A);
  delay(500);
  Serial.print ("Thank....");

   }
   
    

}