#include <IRremote.h>
#include <IRremoteInt.h>

IRrecv irrecv(3);
decode_results results;

void setup() {
  pinMode(11, OUTPUT);
  irrecv.enableIRIn();
  Serial.begin(9600);
}

void loop() {
  if (irrecv.decode(&results)){
    long int decCode = results.value;
    String hex = String(decCode, HEX);
    hex.toUpperCase();
    Serial.println(hex);
    if (hex == "FFE01F") digitalWrite(11,LOW);
    if (hex == "FFA857") digitalWrite(11,HIGH);
    irrecv.resume();
  }
}
