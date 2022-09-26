#include <Arduino.h>
#define LED_PIN 12
int LEDState = LOW;
int timeN;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(10);

  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if(Serial.available() > 0) {
    int data = Serial.parseInt();
    if((data >= 100) && (data <= 4000)) {
      timeN = data;
  
    }
  if(LEDState == LOW){
        LEDState = HIGH;
  }
  else {
    LEDState = LOW;
  }
  }
  if(LEDState == LOW){
    LEDState = HIGH;
  }
  else {
    LEDState = LOW;
  }
  digitalWrite(LED_PIN, LEDState);
  delay(timeN);
  
}

