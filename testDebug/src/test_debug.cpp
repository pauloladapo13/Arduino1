#include<Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello Arduino");

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("In the loop");
  delay(500);
}
