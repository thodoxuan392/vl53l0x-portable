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

#define boolean bool
#define millis() CLOCK_getTick()

typedef struct
{
	void (*beginTransmission)(uint8_t address);
	void (*write)(uint8_t data);
	void (*requestFrom)(uint8_t address, uint8_t data_size);
	uint8_t (*read)(void);
	uint8_t (*endTransmission)(void);
} TwoWire;

extern TwoWire Wire;

#endif // VL53L0X_PORT_H