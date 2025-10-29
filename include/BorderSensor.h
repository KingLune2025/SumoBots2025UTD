#ifndef BORDERSENSOR_H
#define BORDERSENSOR_H

// Include necessary libraries
#include <Arduino.h>

//Constants

// Function declarations
void readBorderSensors();
int getBorder(int BorderSensorR1, int BorderSensorR2, int BorderSensorL1, int BorderSensorL2);

#endif // BORDERSENSOR_H