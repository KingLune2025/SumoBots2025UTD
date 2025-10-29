#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#if defined(BOARD_BLACKPILL)
// --- Blackpill STM32F411 Pin Mapping ---
constexpr int PIN_IR_DISTANCE_SENSOR_RIGHT = PA0;
constexpr int PIN_IR_DISTANCE_SENSOR_MIDDLE = PA1;
constexpr int PIN_IR_DISTANCE_SENSOR_LEFT = PA2;
constexpr int PIN_IR_DISTANCE_SENSOR_FLANK = PA3;

constexpr int PIN_BORDER_SENSOR_R1 = PA4;
constexpr int PIN_BORDER_SENSOR_R2 = PA5;
constexpr int PIN_BORDER_SENSOR_L1 = PA6;
constexpr int PIN_BORDER_SENSOR_L2 = PA7;

#elif defined(BOARD_UNO)
// --- Arduino UNO R3 Pin Mapping ---
constexpr int PIN_IR_DISTANCE_SENSOR_RIGHT = A0;
constexpr int PIN_IR_DISTANCE_SENSOR_MIDDLE = A1;
constexpr int PIN_IR_DISTANCE_SENSOR_LEFT = A2;
constexpr int PIN_IR_DISTANCE_SENSOR_FLANK = A3;

constexpr int PIN_BORDER_SENSOR_R1 = A4;
constexpr int PIN_BORDER_SENSOR_R2 = A5;
constexpr int PIN_BORDER_SENSOR_L1 = A6;
constexpr int PIN_BORDER_SENSOR_L2 = A7;

#else
#error "No board flag defined. Did you forget build_flags in platformio.ini?"
#endif

#endif // BOARD_CONFIG_H