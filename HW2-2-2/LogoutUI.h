#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include <fstream>
#include <string>

using namespace std;

class LogoutUI
{
public:
	void startInterface(ofstream& outFp, string id);
};

#endif