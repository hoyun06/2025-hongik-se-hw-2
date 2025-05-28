#include "AddBicycle.h"
#include "AddBicycleUI.h"

AddBicycle::AddBicycle(ofstream& outFp, ifstream& inFp, RegisteredBicycle& bicycles)
{
	AddBicycleUI addBicycleUI(this);
	addBicycleUI.submitBicycleInfo(outFp, inFp, bicycles);
}

void AddBicycle::addNewBicycle(string bikeId, string name, RegisteredBicycle& bicycles)
{
	bicycles.addBicycle(bikeId, name);
}