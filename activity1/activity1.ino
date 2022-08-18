void setup() {
  // put your setup code here, to run once:
  Serial.println("This is activity1");
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("LED on");
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(1000);
  Serial.println("LED off");
}
