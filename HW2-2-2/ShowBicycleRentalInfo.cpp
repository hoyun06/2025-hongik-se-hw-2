#include "ShowBicycleRentalInfo.h"

#include <vector>
#include <algorithm>

#include "ShowBicycleRentalInfoUI.h"

ShowBicycleRentalInfo::ShowBicycleRentalInfo(ofstream& outFp, RegisteredMember& members)
{
	this->showBicycleRentalInfoUI = new ShowBicycleRentalInfoUI();
	Member* m = members.getLoggedInMember();
	vector<Bicycle> v = m->listRentedBicycles();

	sort(v.begin(), v.end(), [](Bicycle& b1, Bicycle& b2) {
		return b1.getBikeId() < b2.getBikeId();
		});

	vector<vector<string>> bicycleDetails;
	for (int i = 0; i < v.size(); i++)
	{
		bicycleDetails.push_back(v[i].getBicycleDetail());
	}
	this->showBicycleRentalInfoUI->startInterface(outFp, bicycleDetails);
}