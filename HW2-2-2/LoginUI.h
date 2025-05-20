#ifndef LOGINUI_H
#define LOGINUI_H

#include <fstream>

#include "Login.h"
#include "RegisteredMember.h"

using namespace std;

class LoginUI
{
private:
	Login* loginControl;
public:
	LoginUI(Login* loginControl);
	void submitLoginInfo(ofstream& outFp, ifstream& inFp, RegisteredMember& members);
};

#endif