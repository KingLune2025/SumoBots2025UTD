#ifndef IR_DISTANCE_SENSOR_H
#define IR_DISTANCE_SENSOR_H

// Include necessary libraries
#include <Arduino.h>

//Global Variables
extern float distSensorLeft_cm;
extern float distSensorMiddle_cm;
extern float distSensorRight_cm;
    
//Constants

// Function declarations
void readIRDistanceSensors();
int getSampleADC(int IR_Distance_Sensor_Pin);
float adcToVoltage(int adc);
float getDistance_A41(int adc_val);
float getDistance_A21(int adc_val);

#endif // IR_DISTANCE_SENSOR_H