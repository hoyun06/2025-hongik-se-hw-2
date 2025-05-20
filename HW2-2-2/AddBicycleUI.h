#ifndef ADDBICYCLEUI_H 
#define ADDBICYCLEUI_H

#include <fstream>

#include "AddBicycle.h"
#include "RegisteredBicycle.h"

using namespace std;

class AddBicycleUI
{
private:
	AddBicycle addBicycleControl;
public:
	AddBicycleUI(AddBicycle addBicycleControl);
	void submitBicycleInfo(ofstream& outFp, ifstream& inFp, RegisteredBicycle& bicycles);
};

#endif