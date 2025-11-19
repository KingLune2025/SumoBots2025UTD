#include <header.h>

void setup()
{
  // Initialize serial for debugging
  Serial.begin(9600);
  readBorderSensors();
  distSensorLeft_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_LEFT)));
  distSensorMiddleLeft_cm = getDistance_A41(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_MIDDLELEFT)));
  distSensorMiddleRight_cm = getDistance_A41(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_MIDDLERIGHT)));
  distSensorRight_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_RIGHT)));
}

void loop()
{
  if (getBorder(PIN_BORDER_SENSOR_RIGHT, PIN_BORDER_SENSOR_LEFT, PIN_BORDER_SENSOR_BACK) != 0)
  {
    // interrupt behavior to avoid border
  }
  else
  {
    locateTarget(distSensorLeft_cm, distSensorMiddleLeft_cm, distSensorMiddleRight_cm, distSensorRight_cm);
  }
  distSensorLeft_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_LEFT)));
  distSensorMiddleLeft_cm = getDistance_A41(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_MIDDLELEFT)));
  distSensorMiddleRight_cm = getDistance_A41(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_MIDDLERIGHT)));
  distSensorRight_cm = getDistance_A21(adcToVoltage(getSampleADC(PIN_IR_DISTANCE_SENSOR_RIGHT)));
  setMotorSpeeds(leftMotorSpeed, rightMotorSpeed);
}

void locateTarget(int distSensorLeft_cm, int distSensorMiddleLeft_cm, int distSensorMiddleRight_cm, int distSensorRight_cm)
{
  if (distSensorLeft_cm == 0 && distSensorMiddleLeft_cm == 0 && distSensorMiddleRight_cm == 0 && distSensorRight_cm == 0)
  {
    // No target detected, stop or search
    leftMotorSpeed = -1;
    rightMotorSpeed = 1;
  }
}