#include "RegisteredBicycle.h"

void RegisteredBicycle::addBicycle(string bikeId, string name)
{
	Bicycle newBicycle(bikeId, name);
	registeredBicycleCollection.addBicycle(newBicycle);
}

Bicycle RegisteredBicycle::findBicycle(string bikeId)
{
	return registeredBicycleCollection.findBicycle(bikeId);
}