#ifndef REGISTEREDBICYCLE_H
#define REGISTEREDBICYCLE_H

#include <string>

#include "BicycleCollection.h"

using namespace std;

class RegisteredBicycle
{
private:
	BicycleCollection registeredBicycleCollection;
public:
	void addBicycle(string bikeId, string name);
	Bicycle findBicycle(string bikeId);
};

#endif