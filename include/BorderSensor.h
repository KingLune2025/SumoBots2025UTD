#ifndef BORDER_SENSOR_H
#define BORDER_SENSOR_H

// Include necessary libraries
#include <Arduino.h>

//Global Variables
int BorderSensorR1, BorderSensorR2, BorderSensorL1, BorderSensorL2;

//Constants

// Function declarations
void readBorderSensors();
int getBorder(int BorderSensorR1, int BorderSensorR2, int BorderSensorL1, int BorderSensorL2);

#endif // BORDER_SENSOR_H