void setup() {
  pinMode(11, OUTPUT);
}

int brightness=25;

void loop() {
  digitalWrite(11, HIGH);
  delay((brightness/10));

  digitalWrite(11, LOW);
  delay((100-brightness)/10);
}
