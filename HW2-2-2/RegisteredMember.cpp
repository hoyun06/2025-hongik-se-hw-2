#include "RegisteredMember.h"

void RegisteredMember::addMember(string id, string password, string tel)
{
	Member newMember(id, password, tel);
	this->registeredMemberCollection.addMember(newMember);
}

Member* RegisteredMember::findMember(string id, string password)
{
	return this->registeredMemberCollection.findMember(id, password);
}

Member* RegisteredMember::getLoggedInMember()
{
	vector<Member>* members = this->registeredMemberCollection.getAllMembers();
	for (int i = 0; i < members->size(); i++)
	{
		if ((*members)[i].isLoggedIn())
		{
			return &(*members)[i];
		}
	}
}