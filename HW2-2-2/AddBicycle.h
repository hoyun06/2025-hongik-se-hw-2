#ifndef ADDBICYCLE_H
#define ADDBICYCLE_H

#include <fstream>
#include <string>

#include "RegisteredBicycle.h"

using namespace std;

class AddBicycle
{
public:
	AddBicycle(ofstream& outFp, ifstream& inFp, RegisteredBicycle& bicycles);
	void addNewBicycle(string bikeId, string name, RegisteredBicycle& bicycles);
};

#endif