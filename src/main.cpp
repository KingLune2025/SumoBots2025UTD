#include <header.h>

void setup() {
  // Initialize serial for debugging
  Serial.begin(9600);
}

void loop() {
  distSensorLeft_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_LEFT)));
  distSensorMiddle_cm = getDistance_A41(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_MIDDLE)));
  distSensorRight_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_RIGHT)));
}