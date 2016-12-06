void setup() {
  pinMode(11, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Hello world");
}

int brightness=50;

void loop() {
  analogWrite(11, 255 * brightness / 100);

  if (digitalRead(7) == LOW) {
    brightness+=5;
    if (brightness>100){
      brightness = 100;
      Serial.println("Max level reached");
    }
  }
  if (digitalRead(8) == LOW) {
    brightness-=5;
    if (brightness < 0){
      brightness = 0;
     Serial.println("Min level reached");

    }
  }
  delay (100);
}
