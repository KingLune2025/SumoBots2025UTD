#include <header.h>

void setup() {
  // Initialize serial for debugging
  Serial.begin(9600);
  readBorderSensors();
  distSensorLeft_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_LEFT)));
  distSensorMiddle_cm = getDistance_A41(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_MIDDLE)));
  distSensorRight_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_RIGHT)));
}

void loop() {
getBorder(BorderSensorR1, BorderSensorR2, BorderSensorL1, BorderSensorL2);  

  readBorderSensors();
  distSensorLeft_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_LEFT)));
  distSensorMiddle_cm = getDistance_A41(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_MIDDLE)));
  distSensorRight_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_RIGHT)));
  setMotorSpeeds(leftMotorSpeed, rightMotorSpeed);
}


void locateTarget(int distSensorLeft_cm, int distSensorMiddle_cm, int distSensorRight_cm) {
  if (distSensorLeft_cm == 0 && distSensorMiddle_cm == 0 && distSensorRight_cm == 0) {
    // No target detected, stop or search
    leftMotorSpeed = -1;
    rightMotorSpeed = 1;
  } 
}