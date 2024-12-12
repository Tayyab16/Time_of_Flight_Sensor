#include <Arduino.h>
#include <Wire.h>
#include <VL53L0X.h>

VL53L0X tofsensor;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin(5,18);

  if(tofsensor.init() != true){
    Serial.println("could not initialize ToF Sensor.");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(tofsensor.readRangeSingleMillimeters());
  Serial.println("mm");

  delay(500);
}

