int sensorPin = A0;
int sensorValue = 0;

void setup() {
}

void loop() {
  sensorValue = analogRead(sensorPin);
  if (sensorValue < 256) {
    digitalWrite(5, LOW);
  }
  if (sensorValue > 256) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
   }
   if (sensorValue > 512) {
     digitalWrite(6, HIGH);
     digitalWrite(9, LOW);
   }
   if (sensorValue > 768) {
     digitalWrite(9, HIGH);
   }
}
