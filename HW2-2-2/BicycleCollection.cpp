#include "BicycleCollection.h"

void BicycleCollection::addBicycle(Bicycle bicycle)
{
	bicycles.push_back(bicycle);
}

vector<Bicycle> BicycleCollection::getAllbicycles()
{
	return bicycles;
}

Bicycle BicycleCollection::findBicycle(string bikeId)
{
	for (int i = 0; i < bicycles.size(); i++)
	{
		if (bicycles[i].getBikeId() == bikeId)
		{
			return bicycles[i];
		}
	}
}