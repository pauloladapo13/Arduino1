#include <Arduino.h>

#define LED_PIN 10 
int time = 500;

void setup() {

  Serial.begin(115200);
  Serial.setTimeout(10);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {

  if(Serial.available() > 0 ){
    int data = Serial.parseInt();
    if( (100 <= data) && (data <= 1000)){
    digitalWrite(LED_PIN, HIGH);
    delay(time);
    digitalWrite(LED_PIN, LOW);
    delay(time);
    }

  }


}