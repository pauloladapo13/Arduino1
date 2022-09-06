#include<Arduino.h>

#define LED_PIN 11

int pulse = 255;

void setup() {

  pinMode(LED_PIN, OUTPUT);
  

  
}

void loop() {
  
  for(int i=0; i<=255; i++){
    pulse = i;
    
    analogWrite(LED_PIN,pulse );

    delay(5);
  }

  for(int i=255; i>=0; i--){
    pulse = i;
    
    analogWrite(LED_PIN,pulse );

    delay(5);
  }
 
}
