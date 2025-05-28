#include "Login.h"
#include "LoginUI.h"

Login::Login(ofstream& outFp, ifstream& inFp, RegisteredMember& members)
{
	LoginUI loginUI(this);
	loginUI.submitLoginInfo(outFp, inFp, members);
}

void Login::login(string id, string password, RegisteredMember& members)
{
	Member* m = members.findMember(id, password);
	m->login();
}