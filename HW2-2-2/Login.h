#ifndef LOGIN_H
#define LOGIN_H

#include <fstream>
#include <string>

#include "RegisteredMember.h"

using namespace std;

class Login
{
public:
	Login(ofstream& outFp, ifstream& inFp, RegisteredMember& members);
	void login(string id, string password, RegisteredMember& members);
};

#endif 