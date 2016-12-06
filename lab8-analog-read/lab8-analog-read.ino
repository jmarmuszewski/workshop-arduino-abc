void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  //analogRead 10-bit (1024)
  //analogWrite 8-bit (256)
  analogWrite(11, analogRead(A0)/4);
  delay (100);
}
