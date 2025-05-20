#include "Member.h"

Member::Member(string id, string password, string tel)
{
	this->id = id;
	this->password = password;
	this->tel = tel;
	this->loggedIn = false;
}
void Member::login()
{
	this->loggedIn = true;
}
void Member::logout()
{
	this->loggedIn = false;
}
vector<string> Member::getMemberDetail()
{
	vector<string> v;
	v.push_back(this->id);
	v.push_back(this->password);
	return v;
}
bool Member::isLoggedIn()
{
	return this->loggedIn;
}
void Member::addRentedBicycles(Bicycle bicycle)
{
	this->rentedBicycleCollection.addBicycle(bicycle);
}
vector<Bicycle> Member::listRentedBicycles()
{
	return this->rentedBicycleCollection.getAllbicycles();
}