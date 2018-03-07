//Red and yellow LEDs are on one after another 

void setup() {
}

void loop() {
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
}
