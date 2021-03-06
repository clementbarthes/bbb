//============================================================================
// Name        : 06_TimerInterval.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <signal.h>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <sys/time.h>
#include "I2c.h"
#include "Adxl345I2C.h"
using namespace std;


void sigTimer_handler(int signum);

I2c* i2c; // Create an I2C object
Adxl345I2C* accel;


int main() {
	i2c = new I2c(2); // Assign bus 1 to the I2c object
	accel = new Adxl345I2C(i2c);

	struct itimerval timer;
		/* Initial timeout value */
		timer.it_value.tv_sec = 1;  //in sec
		timer.it_value.tv_usec = 0; // in usec
		/* Repetitive timer */
		timer.it_interval.tv_sec = 0;  //in sec
		timer.it_interval.tv_usec = 500000;

		signal(SIGALRM, &sigTimer_handler);
		printf("Timer: %i \n", setitimer(ITIMER_REAL, &timer, NULL));

		for (;;) {
			sleep(10); // Does nothing, just wait for interrupts
		}
	return 0;
}


void sigTimer_handler(int signum){
	cout << "X: " << accel->readAccel(Adxl345I2C::accelX) << "g , "
					<< "Y: " << accel->readAccel(Adxl345I2C::accelY) << "g , "
					<< "Z: " << accel->readAccel(Adxl345I2C::accelZ) << "g"
					<< endl;
}
