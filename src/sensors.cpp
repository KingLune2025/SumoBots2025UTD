#include "sensors.h"



void setupSensors() {
    pinMode(PIN_IR_SENSOR_1, INPUT);
    pinMode(PIN_IR_SENSOR_2, INPUT);
    pinMode(PIN_IR_SENSOR_3, INPUT);
    pinMode(BLACK_WHITE_SENSOR_1, INPUT);
    pinMode(BLACK_WHITE_SENSOR_2, INPUT);  
    pinMode(BLACK_WHITE_SENSOR_3, INPUT);
    pinMode(BLACK_WHITE_SENSOR_4, INPUT);
}

void readIRSensors(int &sensor1, int &sensor2, int &sensor3, int &sensor4) {
    sensor1 = analogRead(PIN_IR_SENSOR_1);
    sensor2 = analogRead(PIN_IR_SENSOR_2);
    sensor3 = analogRead(PIN_IR_SENSOR_3);
}

int analogReadToDistance(int analogValue) {
    int distance = 0;

    //INSERT CODE TO CONVERT ANALOG VALUE TO DISTANCE

    return distance;
}

void readBlackWhiteSensors(int &sensor1, int &sensor2, int &sensor3, int &sensor4) {
    sensor1 = analogRead(BLACK_WHITE_SENSOR_1);
    sensor2 = analogRead(BLACK_WHITE_SENSOR_2);
    sensor3 = analogRead(BLACK_WHITE_SENSOR_3);
    sensor4 = analogRead(BLACK_WHITE_SENSOR_4);
}


