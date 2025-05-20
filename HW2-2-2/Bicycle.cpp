#include "Bicycle.h"

Bicycle::Bicycle(string bikeId, string name) {
	this->bikeId = bikeId;
	this->name = name;
}

vector<string> Bicycle::getBicycleDetail() {
	vector<string> v;
	v.push_back(this->bikeId);
	v.push_back(this->name);
	return v;
}