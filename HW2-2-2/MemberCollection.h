#ifndef MEMBERCOLLECTION_H
#define MEMBERCOLLECTION_H

#include <string>
#include <vector>

#include "Member.h"

using namespace std;

class MemberCollection
{
private:
	vector<Member> members;
public:
	void addMember(Member member);
	Member* findMember(string id, string password);
	vector<Member> getAllMembers();
};

#endif 