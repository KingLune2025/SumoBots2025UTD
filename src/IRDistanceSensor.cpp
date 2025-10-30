#include <header.h>

int IRSensorLeft, IRSensorMiddle, IRSensorRight;

void readIRDistanceSensors() {
    IRSensorLeft = analogRead(PIN_IR_DISTANCE_SENSOR_LEFT);
    IRSensorMiddle = analogRead(PIN_IR_DISTANCE_SENSOR_MIDDLE);
    IRSensorRight = analogRead(PIN_IR_DISTANCE_SENSOR_RIGHT);
}

int getDistance(int IRDistanceSensor) {
    int distance = 0;

    //INSERT CODE TO CONVERT ANALOG VALUE TO DISTANCE

    return distance;
}