#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
#include <vector>

using namespace std;

class Bicycle
{
private:
	string bikeId;
	string name;
public:
	Bicycle(string bikeId, string name);
	string getBikeId();
	vector<string> getBicycleDetail();
};

#endif