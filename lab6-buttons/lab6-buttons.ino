void setup() {
  pinMode(11, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
}

int brightness=50;

void loop() {
  analogWrite(11, 255 * brightness / 100);

  if (digitalRead(7) == HIGH) {
    brightness+=10;
    if (brightness>100){
      brightness = 100;
    }
  }
  if (digitalRead(8) == HIGH) {
    brightness-=10;
    if (brightness < 0){
      brightness = 0;
    }
  }
  delay (100);
}
