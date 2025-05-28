#include "RentBicycleUI.h"

#include <string>
#include <vector>

RentBicycleUI::RentBicycleUI(RentBicycle* rentBicycleControl)
{
	this->rentBicycleControl = rentBicycleControl;
}

void RentBicycleUI::selectBicycle(ofstream& outFp, ifstream& inFp, RegisteredMember& members, RegisteredBicycle& bicycles)
{
	string bikeId;
	inFp >> bikeId;

	vector<string> v = this->rentBicycleControl->rentBicycle(bikeId, members, bicycles);

	outFp << "4.1. 자전거 대여" << '\n';
	outFp << "> " << v[0] << " " << v[1] << "\n\n";
}