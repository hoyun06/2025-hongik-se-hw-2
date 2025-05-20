#ifndef LOGOUT_H
#define LOGOUT_H

#include <fstream>

#include "LogoutUI.h"
#include "RegisteredMember.h"

using namespace std;

class Logout
{
private:
	LogoutUI logoutUI;
public:
	Logout(ofstream& outFp, RegisteredMember& members);
};

#endif