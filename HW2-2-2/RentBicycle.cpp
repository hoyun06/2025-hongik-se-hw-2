#include "RentBicycle.h"
#include "RentBicycleUI.h"

RentBicycle::RentBicycle(ofstream& outFp, ifstream& inFp, RegisteredMember& members, RegisteredBicycle& bicycles)
{
	RentBicycleUI rentBicycleUI(this);
	rentBicycleUI.selectBicycle(outFp, inFp, members, bicycles);
}

vector<string> RentBicycle::rentBicycle(string bikeId, RegisteredMember& members, RegisteredBicycle& bicycles)
{
	Bicycle b = bicycles.findBicycle(bikeId);
	Member m = members.getLoggedInMember();
	m.addRentedBicycles(b);
	return b.getBicycleDetail();
}