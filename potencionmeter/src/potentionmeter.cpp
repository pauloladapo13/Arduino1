#include<Arduino.h>

#define POTENTIOMETER_PIN A2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(POTENTIOMETER_PIN));
  delay(100);
}
