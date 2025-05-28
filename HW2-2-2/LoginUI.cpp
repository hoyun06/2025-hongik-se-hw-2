#include "LoginUI.h"

LoginUI::LoginUI(Login* loginControl)
{
	this->loginControl = loginControl;
}

void LoginUI::submitLoginInfo(ofstream& outFp, ifstream& inFp, RegisteredMember& members)
{
	string id, password;
	inFp >> id >> password;
	
	this->loginControl->login(id, password, members);

	outFp << "2.1. 로그인" << '\n';
	outFp << "> " << id << " " << password << "\n\n";
}