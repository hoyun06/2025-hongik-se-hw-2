#include "RegisteredBicycle.h"

void RegisteredBicycle::addBicycle(string bikeId, string name)
{
	Bicycle bicycle(bikeId, name);
	registeredBicycleCollection.addBicycle(bicycle);
}

Bicycle RegisteredBicycle::findBicycle(string bikeId)
{
	return registeredBicycleCollection.findBicycle(bikeId);
}