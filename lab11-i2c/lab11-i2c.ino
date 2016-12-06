#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  Serial.println(" Requesting temperatures...");
  sensors.requestTemperatures(); 

  Serial.print("Temperature for Device 1 is: ");
  Serial.println(sensors.getTempCByIndex(0));
  delay(1000);
}
