#include "BicycleSharingSystem.h"

#include <fstream>

#include "Login.h"
#include "Logout.h"
#include "Signup.h"
#include "ExitSystem.h"
#include "AddBicycle.h"
#include "RentBicycle.h"
#include "RegisteredMember.h"
#include "RegisteredBicycle.h"
#include "ShowBicycleRentalInfo.h"

// 파일 입출력을 위한 객체들 초기화
// 시스템에 등록된 Member와 Bicycle을 유지하는 RegisteredMember, RegisteredBicycle 객체 생성
// 입력 파일에서 메뉴를 읽고 그에 대응되는 use case를 처리할 수 있는 control class에 위임
// 입력 파일에서 '종료' 메뉴를 읽을 시 시스템 종료 use case를 처리하는 control class에 위임
void BicycleSharingSystem::run()
{
	ifstream inFp;
	ofstream outFp;
	inFp.open("input.txt");
	outFp.open("output.txt");

	int menuLevel1 = 0, menuLevel2 = 0, isProgramExit = 0;
	RegisteredMember members;
	members.addMember("admin", "admin", "");
	RegisteredBicycle bicycles;

	while (!isProgramExit)
	{
		inFp >> menuLevel1 >> menuLevel2;

		switch (menuLevel1)
		{
		case 1:
			switch (menuLevel2)
			{
			case 1:
				new Signup(outFp, inFp, members);
				break;
			}
			break;
		case 2:
			switch (menuLevel2)
			{
			case 1:
				new Login(outFp, inFp, members);
				break;
			case 2:
				new Logout(outFp, members);
				break;
			}
			break;
		case 3:
			switch (menuLevel2)
			{
			case 1:
				new AddBicycle(outFp, inFp, bicycles);
				break;
			}
			break;
		case 4:
			switch (menuLevel2)
			{
			case 1:
				new RentBicycle(outFp, inFp, members, bicycles);
				break;
			}
			break;
		case 5:
			switch (menuLevel2)
			{
			case 1:
				new ShowBicycleRentalInfo(outFp, members);
				break;
			}
			break;
		case 6:
			switch (menuLevel2)
			{
			case 1:
				new ExitSystem(outFp);
				isProgramExit = 1;
				break;
			}
			break;
		}
	}

	inFp.close();
	outFp.close();
}