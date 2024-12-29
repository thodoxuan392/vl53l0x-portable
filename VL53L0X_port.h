/**
 * @file VL53L0X_port.h
 * @author Xuan Tho Do (tho.dok17@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-12-14
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef VL53L0X_PORT_H
#define VL53L0X_PORT_H

#include <stdint.h>
#include <stdbool.h>
#include <hal/clock.h>
#include <Wire.h>

#define boolean bool
#define millis() CLOCK_getTick()

#endif // VL53L0X_PORT_H