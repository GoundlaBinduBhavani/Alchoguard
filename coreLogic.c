void loop() {
  int sensorValue = analogRead(A0);
  if(sensorValue > THRESHOLD) {  // Custom threshold
    digitalWrite(RELAY_PIN, LOW); // Cut engine
    digitalWrite(BUZZER_PIN, HIGH); // Alert
  } else {
    digitalWrite(RELAY_PIN, HIGH); // Normal operation
  }
}