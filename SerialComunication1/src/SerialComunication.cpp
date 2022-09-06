#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  // to pass data to the arduino
  Serial.println("Hello");

  // in case we want to change the time we want arduino to process the data, for example 10 ms
  Serial.setTimeout(10);
  
  
}

void loop() {

// to receive data from the arduino
  if(Serial.available() > 0){
    int var = Serial.parseInt();
    // in case we want to pass a float 
    // double var = Serial.parseFloat();
    // in case we want to pass String
    // String var = Serial.readString();
    // the arduino will print the data tha received
    Serial.println(var);
  }

}