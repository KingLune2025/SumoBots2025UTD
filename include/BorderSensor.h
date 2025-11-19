#ifndef BORDER_SENSOR_H
#define BORDER_SENSOR_H

// Include necessary libraries
#include <Arduino.h>

//Global Variables
int BorderSensorRight, BorderSensorLeft, BorderSensorBack;

//Constants

// Function declarations
void readBorderSensors();
int getBorder(int BorderSensorRight, int BorderSensorLeft, int BorderSensorBack);

#endif // BORDER_SENSOR_H