#ifndef SIGNUP_H
#define SIGNUP_H

#include <fstream>
#include <string>

#include "RegisteredMember.h"

using namespace std;

class Signup
{
public:
	Signup(ofstream& outFp, ifstream& inFp, RegisteredMember& members);
	void signup(string id, string password, string tel, RegisteredMember& members);
};

#endif 