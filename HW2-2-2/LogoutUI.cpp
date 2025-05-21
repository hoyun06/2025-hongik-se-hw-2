#include "LogoutUI.h"

void LogoutUI::startInterface(ofstream& outFp, string id)
{
	outFp << "2.2. 로그아웃" << '\n';
	outFp << "> " << id << "\n\n";
}