//============================================================================
// Name        : 04_Interrupt.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "mraa.hpp"
using namespace std;

// Define the push-button pin
#define PUSH_BUTTON_PIN 8 //GPIO67

mraa::Gpio* interruptPin;
void interrupt(void* args)
{
    cout << "INTERRUPTED!!!" << endl;
}
int main() {
	interruptPin = new mraa::Gpio(PUSH_BUTTON_PIN);
	interruptPin->dir(mraa::DIR_IN);
	interruptPin->isr(mraa::EDGE_RISING, &interrupt, NULL);

	// Wait for interrupt endlessly
	for(;;){
		sleep(1);
	}
	return 0;
}