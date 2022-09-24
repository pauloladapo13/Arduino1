#include <Arduino.h>
#define LED_PIN 12
unsigned long timePreviousLEDBlink = millis();
unsigned long timeIntervalLEDBlink = 470;

unsigned long timePreviousLED2Blink = millis();
unsigned long timeIntervalLED2Blink = 1300;

int LED1State = LOW;
int LED2State = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  unsigned long timeNow = millis();
  // action 1
  if(timeNow - timePreviousLEDBlink > timeIntervalLEDBlink){
    if(LED1State == LOW){
      LED1State = HIGH;
    }
    else {
      LED1State = LOW;
  }
    digitalWrite(LED_PIN, LED1State);
    timePreviousLEDBlink += timeIntervalLEDBlink;
    }
    // action 2
  if(timeNow - timePreviousLED2Blink > timeIntervalLED2Blink){
    if(LED2State == LOW){
      LED2State = HIGH;
    }
    else {
      LED2State = LOW;
  }
    digitalWrite(LED_PIN, LED2State);
    timePreviousLED2Blink += timeIntervalLED2Blink;
    }
}