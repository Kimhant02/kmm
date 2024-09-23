#include <Arduino.h>
#include "module.h"


void setup() {
    Serial.begin(115200);
    Config_server();
    
} 

void loop() {
    Serial.println("1");
    delay (2000);

}