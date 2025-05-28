#include "SignupUI.h"

#include <string>

SignupUI::SignupUI(Signup* signupControl)
{
	this->signupControl = signupControl;
}

void SignupUI::submitSignupInfo(ofstream& outFp, ifstream& inFp, RegisteredMember& members)
{
	string id, password, tel;
	inFp >> id >> password >> tel;
	this->signupControl->signup(id, password, tel, members);
	outFp << "1.1. 회원가입" << '\n';
	outFp << "> " << id << " " << password << " " << tel << "\n\n";
}