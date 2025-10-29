#include <header.h>

int BorderSensorR1, BorderSensorR2, BorderSensorL1, BorderSensorL2;

void readBorderSensors() {
    BorderSensorR1 = analogRead(PIN_BORDER_SENSOR_R1);
    BorderSensorR2 = analogRead(PIN_BORDER_SENSOR_R2);
    BorderSensorL1 = analogRead(PIN_BORDER_SENSOR_L1);
    BorderSensorL2 = analogRead(PIN_BORDER_SENSOR_L2);
}

int getBorder(int BorderSensorR1, int BorderSensorR2, int BorderSensorL1, int BorderSensorL2) {
    int border = 0;

    /** We will develop a Case function here to check all Border Sensors
        and if found returns which border sensor was detected.
        Will also need to know what to do if 2 of them were detected. **/

    return border;
}