#ifndef BICYCLECOLLECION_H
#define BICYCLECOLLECION_H

#include <string>
#include <vector>

#include "Bicycle.h"

using namespace std;

class BicycleCollection
{
private:
	vector<Bicycle> bicycles;
public:
	void addBicycle(Bicycle bicycle);
	vector<Bicycle> getAllbicycles();
	Bicycle findBicycle(string bikeId);
};

#endif
