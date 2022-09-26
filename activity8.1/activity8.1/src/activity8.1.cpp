#include <Arduino.h>
#define LED_PIN 12
 int LEDState = 0;

unsigned long previousTimeLEDBlink = millis();
unsigned long timeN = 500;

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
  }
  unsigned long timeNow = millis();
  if(timeNow - previousTimeLEDBlink > timeN) {

    if(LEDState == 0){
      LEDState = 1;
    }
    else {
      LEDState = 0;
    }
    digitalWrite(LED_PIN, LEDState);
    previousTimeLEDBlink += timeN;
  }
}

  


