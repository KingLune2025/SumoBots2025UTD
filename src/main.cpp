#include <header.h>


// put function declarations here:
int blackWhite1, blackWhite2, blackWhite3, blackWhite4;
  int ir1, ir2, ir3;

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

  //CALL FUNCTIONS IN SEPERATE SO IT RUNS PARALLELLY??
  readBlackWhiteSensors(blackWhite1, blackWhite2, blackWhite3, blackWhite4);
  readIRSensors(ir1, ir2, ir3);
}

// put function definitions here:
