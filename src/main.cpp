#include <header.h>

void setup() {
  // Initialize serial for debugging
  Serial.begin(9600);
}

void loop() {
  getDistance(PIN_IR_DISTANCE_SENSOR_MIDDLE);
  getBorder(PIN_BORDER_SENSOR_R1, PIN_BORDER_SENSOR_R2, PIN_BORDER_SENSOR_L1, PIN_BORDER_SENSOR_L2);
}