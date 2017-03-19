//============================================================================
// Name        : 02_MRAA.cpp
//============================================================================

#include <iostream>
#include <mraa.hpp>
using namespace std;

int main() {
	mraa::init();
	cout << mraa::getVersion() << endl; // prints MRAA version
	cout << "Board type is: " << mraa::getPlatformType() << endl; // prints board used	return 0;
}
