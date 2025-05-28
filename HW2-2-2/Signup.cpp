#include "Signup.h"
#include "SignupUI.h"

Signup::Signup(ofstream& outFp, ifstream& inFp, RegisteredMember& members)
{
	SignupUI signupUI(this);
	signupUI.submitSignupInfo(outFp, inFp, members);
}

void Signup::signup(string id, string password, string tel, RegisteredMember& members)
{
	members.addMember(id, password, tel);
}