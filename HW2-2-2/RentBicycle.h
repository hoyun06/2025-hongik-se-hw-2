#ifndef RENTBICYCLE_H
#define RENTBICYCLE_H

#include <fstream>
#include <string>
#include <vector>

#include "RegisteredMember.h"
#include "RegisteredBicycle.h"

using namespace std;

class RentBicycle
{
public:
	RentBicycle(ofstream& outFp, ifstream& inFp, RegisteredMember& members, RegisteredBicycle& bicycles);
	vector<string> rentBicycle(string bikeId, RegisteredMember& members, RegisteredBicycle& bicycles);
};

#endif 