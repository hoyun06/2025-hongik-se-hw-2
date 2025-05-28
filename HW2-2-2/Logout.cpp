#include "Logout.h"

#include <vector>

#include "LogoutUI.h"

Logout::Logout(ofstream& outFp, RegisteredMember& members)
{
	this->logoutUI = new LogoutUI();
	Member* m = members.getLoggedInMember();
	m->logout();
	vector<string> v = m->getMemberDetail();
	this->logoutUI->startInterface(outFp, v[0]);
;}