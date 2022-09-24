#include <Arduino.h>

unsigned long timeBegin;

void setup() {
  Serial.begin(115200);
  timeBegin = millis();
  // delay(500);
  // unsigned long timeEnd = millis();
  // unsigned long totalDuration = timeEnd - timeBegin;
  // Serial.println(totalDuration);
  
  
}

void loop() {
  unsigned long timeNow = millis();
  unsigned long duration = timeNow - timeBegin;
  Serial.println(duration);
  
  

}