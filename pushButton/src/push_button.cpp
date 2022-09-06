#include<Arduino.h>

#define BUTTON_PIN 2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  bool isMode = digitalRead(BUTTON_PIN);

  if(isMode == true){
    analogWrite(11, 255);
  }
  else{ 
    analogWrite(11, 0);
  }
  

  

}
