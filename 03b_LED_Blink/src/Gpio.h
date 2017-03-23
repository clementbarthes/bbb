/*
 * Gpio.h
 *
 *  Created on: Mar 20, 2017
 *      Author: bbb
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <cstdio>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
using namespace std;

class Gpio {
	int pinNumber;
	int pinDirection;
	ostringstream gpioPathSS;
	string gpioPath;
public:
	enum pinDirection	{in= 0,
						out=1
						};
	Gpio(int pinNumber);
	int setDirection(int dir);
	int getDirection();
	int read();
	int write(int value);
	virtual ~Gpio();
};

#endif /* GPIO_H_ */
