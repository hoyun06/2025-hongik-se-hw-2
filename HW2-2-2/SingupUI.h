#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include "Signup.h"

class SignupUI
{
private:
	Signup signupControl;
public:
	void submitSignupInfo(ofstream& outFp, ifstream& inFp, RegisteredMember& members);
};

#endif 