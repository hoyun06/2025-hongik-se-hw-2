#include "ShowBicycleRentalInfo.h"

#include <vector>

#include "ShowBicycleRentalInfoUI.h"

ShowBicycleRentalInfo::ShowBicycleRentalInfo(ofstream& outFp, RegisteredMember& members)
{
	this->showBicycleRentalInfoUI = new ShowBicycleRentalInfoUI();
	Member* m = members.getLoggedInMember();
	vector<Bicycle> v = m->listRentedBicycles();

	vector<vector<string>> bicycleDetails;
	for (int i = 0; i < v.size(); i++)
	{
		bicycleDetails.push_back(v[i].getBicycleDetail());
	}
	this->showBicycleRentalInfoUI->startInterface(outFp, bicycleDetails);
}