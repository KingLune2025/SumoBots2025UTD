#include <header.h>

int BorderSensorR1, BorderSensorR2, BorderSensorL1, BorderSensorL2;

void readBorderSensors() {
    BorderSensorRight = analogRead(PIN_BORDER_SENSOR_RIGHT);
    BorderSensorLeft = analogRead(PIN_BORDER_SENSOR_LEFT);
    BorderSensorBack = analogRead(PIN_BORDER_SENSOR_BACK);
}

int getBorder(int BorderSensorRight, int BorderSensorLeft, int BorderSensorBack) {
    int border = 0;
    if (BorderSensorLeft == 1 && BorderSensorRight == 1) {
        border = 1; // front on line
        //go backward();
    }
    else if (BorderSensorRight == 1 && BorderSensorBack == 1) {
        border = 2; // right back on line
        //turn left and forward();
    }
    else if (BorderSensorLeft == 1 && BorderSensorBack == 1) {
        border = 3; // left back on line
        //turn right and forward();
    }
    else if(BorderSensorBack == 1) {
        border = 4; // back on line
        //go forward();
    }
    else if (BorderSensorRight == 1) {
        border = 2; // right side on line
        //turn left and forward();
    }
    else if (BorderSensorLeft == 1) {
        border = 3; // left side on line
        //turn right and forward();
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