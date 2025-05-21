#include "AddBicycleUI.h"

#include <string>

AddBicycleUI::AddBicycleUI(AddBicycle* addBicycleControl)
{
	this->addBicycleControl = addBicycleControl;
}

void AddBicycleUI::submitBicycleInfo(ofstream& outFp, ifstream& inFp, RegisteredBicycle& bicycles)
{
	string bikeId, name;
	inFp >> bikeId >> name;

	this->addBicycleControl->addNewBicycle(bikeId, name, bicycles);

	outFp << "3.1. 자전거 등록" << '\n';
	outFp << "> " << bikeId << " " << name << "\n\n";
}