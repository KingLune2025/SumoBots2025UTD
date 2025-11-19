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
    if (BorderSensorL1 == 1 && BorderSensorR1 == 1) {
        border = 1; // front on line
        //go backward();
    }
    else if (BorderSensorR1 == 1 && BorderSensorB == 1) {
        border = 2; // right back on line
        //turn left and forward();
    }
    else if (BorderSensorL1 == 1 && BorderSensorB == 1) {
        border = 3; // left back on line
        //turn right and forward();
    }
    else if(BorderSensorB == 1) {
        border = 2; // back on line
        //go forward();
    }
    else if (BorderSensorL1 == 1) {
        border = 3; // left side on line
        //turn right and forward();
    }
    else if (BorderSensorR1 == 1) {
        border = 4; // right side on line
        //turn left and forward();
    }
    else {
        border = 0; // no border detected
    }

      /** We will develop a Case function here to check all Border Sensors
        and if found returns which border sensor was detected.
        Will also need to know what to do if 2 of them were detected. **/

    return border;

    //Need something to read border
}