#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#if defined(BOARD_BLACKPILL)
// --- Blackpill STM32F411 Pin Mapping ---
constexpr int PIN_IR_DISTANCE_SENSOR_RIGHT = PA0;
constexpr int PIN_IR_DISTANCE_SENSOR_MIDDLELEFT = PA1;
constexpr int PIN_IR_DISTANCE_SENSOR_MIDDLERIGHT = PA2;
constexpr int PIN_IR_DISTANCE_SENSOR_LEFT = PA3;


constexpr int PIN_BORDER_SENSOR_RIGHT = PA4;
constexpr int PIN_BORDER_SENSOR_LEFT = PA5;
constexpr int PIN_BORDER_SENSOR_BACK = PA6;


constexpr float VREF = 3.3;
constexpr float MAX_ADC = 4095.0;

#elif defined(BOARD_UNO)
// --- Arduino UNO R3 Pin Mapping ---
constexpr int PIN_IR_DISTANCE_SENSOR_RIGHT = A0;
constexpr int PIN_IR_DISTANCE_SENSOR_MIDDLELEFT = A1;
constexpr int PIN_IR_DISTANCE_SENSOR_MIDDLERIGHT = A2;
constexpr int PIN_IR_DISTANCE_SENSOR_LEFT = A3;


constexpr int PIN_BORDER_SENSOR_RIGHT = A4;
constexpr int PIN_BORDER_SENSOR_LEFT = A5;
constexpr int PIN_BORDER_SENSOR_BACK = A6;

constexpr float VREF = 5.0;
constexpr float MAX_ADC = 1023.0;

#else
#error "No board flag defined. Did you forget build_flags in platformio.ini?"
#endif

#endif // BOARD_CONFIG_H