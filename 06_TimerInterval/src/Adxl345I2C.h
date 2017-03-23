/*
 * Adxl345I2C.h
 *
 *  Created on: Mar 19, 2017
 *      Author: bbb
 */

#ifndef ADXL345I2C_H_
#define ADXL345I2C_H_
#include "I2c.h"

class Adxl345I2C {
	I2c* i2c;
	static const uint8_t accelAddress = 0x53;
public:
	static const uint8_t accelX = 0x32;
	static const uint8_t accelY = 0x34;
	static const uint8_t accelZ = 0x36;

	float readAccel(uint8_t accelDir);

	Adxl345I2C(I2c* i2c);
	virtual ~Adxl345I2C();
};

#endif /* ADXL345I2C_H_ */
