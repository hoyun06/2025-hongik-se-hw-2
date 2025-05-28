#ifndef REGISTEREDMEMBER_H
#define REGISTEREDMEMBER_H

#include <string>

#include "Member.h"
#include "MemberCollection.h"

using namespace std;

class RegisteredMember
{
private:
	MemberCollection registeredMemberCollection;
public:
	void addMember(string id, string password, string tel);
	Member* findMember(string id, string password);
	Member* getLoggedInMember();
};

#endif 