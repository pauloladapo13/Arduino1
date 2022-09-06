#include<Arduino.h>
#define LED_1_PIN 12
#define LED_2_PIN 11 
#define LED_3_PIN 10

void setup() {
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);


}


void loop() {
  digitalWrite(LED_1_PIN, 1);
  digitalWrite(LED_2_PIN, 0);
  digitalWrite(LED_3_PIN, 0);
  delay(3000);
  
  digitalWrite(LED_1_PIN, 0);
  digitalWrite(LED_2_PIN, 0);
  digitalWrite(LED_3_PIN, 1);
  delay(3000);

  digitalWrite(LED_1_PIN, 0);
  digitalWrite(LED_2_PIN, 1);
  digitalWrite(LED_3_PIN, 0);
  delay(1000);
  

}
