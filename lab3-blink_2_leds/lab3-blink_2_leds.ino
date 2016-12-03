void setup() {
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(11, HIGH);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  delay(200);
}
