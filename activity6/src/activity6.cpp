#include<Arduino.h>

#define LED_1_PIN 12
#define LED_2_PIN 11 
#define LED_3_PIN 10

#define PUSH_BUTTON 2

#define LED_PIN_ARRAY_SIZE 3

int LEDBlinkState = 1;

byte LEDPinArray[LED_PIN_ARRAY_SIZE] = 
      {LED_1_PIN, LED_2_PIN, LED_3_PIN};

void setLEDPinModes(){
  for(int i = 0; i < LED_PIN_ARRAY_SIZE; i++){
    pinMode(LEDPinArray[i], OUTPUT);
    
  }

}

void turnOffAllLEDs(){
  for(int i = 0; i < LED_PIN_ARRAY_SIZE; i ++){
    digitalWrite(LEDPinArray[LED_PIN_ARRAY_SIZE],0);
  }
}

void toggleLEDs(){
  
  if(LEDBlinkState == 1) {
      digitalWrite(LED_1_PIN, 1);
      digitalWrite(LED_2_PIN, 0);
      digitalWrite(LED_3_PIN, 1);
      LEDBlinkState = 2;
    }
    else {
    digitalWrite(LED_1_PIN, 0);
    digitalWrite(LED_2_PIN, 1);
    digitalWrite(LED_3_PIN, 0);
    LEDBlinkState = 1;
    
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(PUSH_BUTTON, INPUT);

  setLEDPinModes();

  turnOffAllLEDs();
}


void loop() {
 
  if(digitalRead(PUSH_BUTTON) == LOW){

    toggleLEDs();
    delay(300);
  }

}
