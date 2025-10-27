#ifndef SENSORS_H
#define SENSORS_H

// Include necessary libraries
#include <Arduino.h>

//Constants


// Pin definitions
#define PIN_IR_SENSOR_1 A0
#define PIN_IR_SENSOR_2 A1
#define PIN_IR_SENSOR_3 A2
#define PIN_IR_SENSOR_4 A3
#define BLACK_WHITE_SENSOR_1 A4
#define BLACK_WHITE_SENSOR_2 A5
#define BLACK_WHITE_SENSOR_3 A6
#define BLACK_WHITE_SENSOR_4 A7

// Function declarations
void setupSensors();
void readIRSensors(int &sensor1, int &sensor2, int &sensor3);
void readBlackWhiteSensors(int &sensor1, int &sensor2, int &sensor3, int &sensor4);

#endif // SENSORS_H