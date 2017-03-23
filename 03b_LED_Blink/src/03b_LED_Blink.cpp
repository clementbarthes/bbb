//============================================================================
// Name        : 03b_LED_Blink.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Gpio.h"
using namespace std;

Gpio* gpioIn;
Gpio* gpioOut;
int main() {
	gpioIn = new Gpio(67);
	gpioOut = new Gpio(66);
	gpioOut->setDirection(Gpio::out);
	gpioOut->write(1);
	cout << "First GPIO exported" << endl;
	gpioIn->setDirection(Gpio::in);
	cout << "Dir: " << gpioIn->getDirection() <<  endl;

	cout << "Value: " << gpioIn->read() <<  endl;

	return 0;
}