#include "ShowBicycleRentalInfoUI.h"

void ShowBicycleRentalInfoUI::startInterface(ofstream& outFp, vector<vector<string>>& bicycleDetails)
{
	outFp << "5.1. 자전거 대여 리스트" << '\n';
	for (int i = 0; bicycleDetails.size(); i++)
	{
		vector<string> v = bicycleDetails[i];
		outFp << "> " << v[0] << " " << v[1] << '\n';
	}
	outFp << '\n';
}