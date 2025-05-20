#ifndef SHOWBICYCLERENTALINFO_H  
#define SHOWBICYCLERENTALINFO_H

#include <fstream>

#include "ShowBicycleRentalInfoUI.h"
#include "RegisteredMember.h"

using namespace std;

class ShowBicycleRentalInfo
{
private:
	ShowBicycleRentalInfoUI showBicycleRentalInfoUI;
public:
	ShowBicycleRentalInfo(ofstream& outFp, RegisteredMember& members);
};

#endif 