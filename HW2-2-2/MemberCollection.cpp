#include "MemberCollection.h"

void MemberCollection::addMember(Member member)
{
	this->members.push_back(member);
}

Member MemberCollection::findMember(string id, string password)
{
	for (int i = 0; i < members.size(); i++)
	{
		vector<string> v = members[i].getMemberDetail();
		if (v[0] == id && v[1] == password)
		{
			return members[i];
		}
	}
}

vector<Member> MemberCollection::getAllMembers()
{
	return members;
}