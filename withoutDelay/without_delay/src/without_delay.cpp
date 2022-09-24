#include <Arduino.h>
unsigned long previousTimeSerialPrint = millis();
unsigned long timeIntervalSerialPrint = 500;

void setup() {
  Serial.begin(9600);

}

void loop() {
  unsigned long timeNow = millis();
  if(timeNow - previousTimeSerialPrint > timeIntervalSerialPrint) {
    Serial.println("Hello");
    Serial.println(millis());
    previousTimeSerialPrint += timeIntervalSerialPrint;
  }
}