void setup() {
  pinMode(11, OUTPUT);
}

int brightness=25;

void loop() {
  analogWrite(11, 255 * brightness / 100);
  delay (1000);
}
