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
    int BorderSensorB;
    // if (BorderSensorL2 == 1 && BorderSensorR2 == 1) {
    //     // back on line
    //     //go forward();
    //     border = 1;
    // }
    // else if (BorderSensorL1 == 1 && BorderSensorR1 == 1) {
    //     //front on line
    //     //go backward();
    //     border = 2;
    // }
    // else if (BorderSensorL1 == 1 && BorderSensorL2 == 1) {
    //     //left both on line
    //     //turn right and forward();
    //     border = 3;
    // }
    // else if (BorderSensorR1 == 1 && BorderSensorR2 == 1) {
    //     //right both on line
    //     //turn left and forward();
    //     border = 4;
    // }
    // else if (BorderSensorL1 == 1) {
    //     //left front on line
    //     //turn right and backward();
    //     border = 5;
    // }
    // else if (BorderSensorR1 == 1) {
    //     //right front on line
    //     //turn left() and backward();
    //     border = 6;
    // }
    // else if (BorderSensorL2 == 1) {
    //     //left back on line
    //     //turn right() and forward();
    //     border = 3;
    // }
    // else if (BorderSensorR2 == 1) {
    //     //right back on line
    //     //turn left() and forward();
    //     border = 4;
    // }
    // else {
    //     //no border detected
    //     border = 0;
    // }

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