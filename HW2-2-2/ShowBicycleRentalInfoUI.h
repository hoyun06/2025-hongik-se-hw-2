#ifndef SHOWBICYCLERENTALINFOUI_H
#define SHOWBICYCLERENTALINFOUI_H

#include <fstream>
#include <string>
#include <vector>

using namespace std;

class ShowBicycleRentalInfoUI
{
public:
	void startInterface(ofstream& outFp, vector<vector<string>>& bicycleDetails);
};

#endif