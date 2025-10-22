#ifndef HEADER_H
#define HEADER_H

// Include necessary libraries
#include <Arduino.h>

// Constants and pin definitions
// Add your pin definitions here

// Function declarations
// Add your function prototypes here
void setupSensors();
void readIRSensors(int &sensor1, int &sensor2, int &sensor3, int &sensor4);
void readBlackWhiteSensors(int &sensor1, int &sensor2, int &sensor3, int &sensor4);
#endif // HEADER_H