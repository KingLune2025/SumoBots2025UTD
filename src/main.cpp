#include <header.h>


// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  // Initialize serial for debugging
  Serial.begin(9600);
  // Initialize sensors (defined in sensors.cpp)
  setupSensors();
}

void loop() {
  // put your main code here, to run repeatedly:
  // Example: read sensors or perform logic here. For now, print a heartbeat.
  
}

// put function definitions here:
