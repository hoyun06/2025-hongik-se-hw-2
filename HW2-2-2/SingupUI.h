#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <fstream>

#include "Signup.h"
#include "RegisteredMember.h"

class SignupUI
{
private:
	Signup signupControl;
public:
	SignupUI(Signup signupControl);
	void submitSignupInfo(ofstream& outFp, ifstream& inFp, RegisteredMember& members);
};

#endif 