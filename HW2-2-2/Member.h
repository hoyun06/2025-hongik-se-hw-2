#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>

#include "Bicycle.h"
#include "BicycleCollection.h"

using namespace std;

class Member
{
private:
	string id;
	string password;
	string tel;
	bool isLoggedIn;
	BicycleCollection rentedBicycleCollection;
public:
	Member(string id, string password, string tel);
	void login();
	void logout();
	vector<string> getMemberDetail();
	bool isLoggedIn();
	void addRentedBicycles(Bicycle bicycle);
	vector<Bicycle> listRentedBicycles();
};

#endif 
