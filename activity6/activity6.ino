#define LED_1_PIN 12
#define LED_2_PIN 11 
#define LED_3_PIN 10
#define PUSH_BUTTON 2

int LEDBlinkState = 1;


void setup() {
  Serial.begin(9600);
  pinMode(PUSH_BUTTON, INPUT);
  
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);

  digitalWrite(LED_1_PIN, 0);
  digitalWrite(LED_2_PIN, 0);
  digitalWrite(LED_3_PIN, 0);

  



}


void loop() {
 
  if(digitalRead(PUSH_BUTTON) == LOW){

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
    delay(300);
  }
  


}
