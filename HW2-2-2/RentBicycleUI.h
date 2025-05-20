#ifndef RENTBICYCLEUI_H
#define RENTBICYCLEUI_H

#include <fstream>

#include "RentBicycle.h"
#include "RegisteredMember.h"
#include "RegisteredBicycle.h"

using namespace std;

class RentBicycleUI
{
private:
	RentBicycle rentBicycleControl;
public:
	RentBicycleUI(RentBicycle rentBicycleControl);
	void selectBicycle(ofstream& outFp, ifstream& inFp, RegisteredMember& members, RegisteredBicycle& bicycles);
};

#endif 