#include <header.h>

// Calibration for Sharp GP2Y0A41SK0F (4-30cm)
const int A41_TABLE_SIZE = 6;
// ADC values measured at the corresponding distances
const int adc_A41[A41_TABLE_SIZE] = { 3100, 2500, 1800, 1300, 900, 700 }; 
// The known distances (cm)
const int dist_A41[A41_TABLE_SIZE] = { 4, 6, 10, 15, 20, 30 };

// Calibration for Sharp GP2Y0A21YK0F (10-80cm)
const int A21_TABLE_SIZE = 7;
// ADC values measured at the corresponding distances
const int adc_A21[A21_TABLE_SIZE] = { 2800, 2100, 1500, 1000, 800, 650, 500 };
// The known distances (cm)
const int dist_A21[A21_TABLE_SIZE] = { 10, 15, 20, 30, 40, 60, 80 };

float distSensorLeft_cm, distSensorMiddle_cm, distSensorRight_cm;
int IRSensorLeft, IRSensorMiddle, IRSensorRight;

void readIRDistanceSensors() {
    // Read and convert Left sensor (A21 10-80cm)
    int adcLeft = getSampleADC(PIN_IR_DISTANCE_SENSOR_LEFT);
    distSensorLeft_cm = getDistance_A21(adcLeft);

    // Read and convert Middle sensor (A41 4-30cm)
    int adcMiddle = getSampleADC(PIN_IR_DISTANCE_SENSOR_MIDDLE);
    distSensorMiddle_cm = getDistance_A41(adcMiddle);

    // Read and convert Right sensor (A21 10-80cm)
    int adcRight = getSampleADC(PIN_IR_DISTANCE_SENSOR_RIGHT);
    distSensorRight_cm = getDistance_A21(adcRight);
}

float adcToVoltage(int adc) {
    return (adc * VREF) / MAX_ADC;
}

//Reads an analog pin multiple times and returns the average.
int getSampleADC(int IR_Distance_Sensor_Pin) {
    const int samples = 10;
    long sum = 0;

    for (int i = 0; i < samples; i++) {
        sum += analogRead(IR_Distance_Sensor_Pin);
        delayMicroseconds(500);
    }

    return (sum / samples);
}


// Generic helper function to map an ADC value to a distance
float mapADCtoDistance(int adc_val, const int adc_table[], const int dist_table[], int table_size) {
    // 1. Handle out-of-bounds (too close)
    // If ADC is higher than our closest reading, return the closest distance.
    if (adc_val >= adc_table[0]) {
        return dist_table[0];
    }

    // 2. Handle out-of-bounds (too far)
    // If ADC is lower than our farthest reading, return the farthest distance.
    if (adc_val <= adc_table[table_size - 1]) {
        return dist_table[table_size - 1];
    }

    // 3. Find the "bucket" in the table where our ADC value fits
    int i = 0;
    while (i < table_size - 1) {
        if (adc_val >= adc_table[i+1]) {
            break;
        }
        i++;
    }
}

//Gets distance for the A41 sensor (4-30cm)
float getDistance_A41(int adc_val) {
    return mapADCtoDistance(adc_val, adc_A41, dist_A41, A41_TABLE_SIZE);
}

//Gets distance for the A21 sensor (10-80cm)
float getDistance_A21(int adc_val) {
    return mapADCtoDistance(adc_val, adc_A21, dist_A21, A21_TABLE_SIZE);
}