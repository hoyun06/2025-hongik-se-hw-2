#include "BicycleSharingSystem.h"

#include <fstream>

#include "Login.h"
#include "Logout.h"
#include "Signup.h"
#include "AddBicycle.h"
#include "RentBicycle.h"
#include "RegisteredMember.h"
#include "RegisteredBicycle.h"
#include "ShowBicycleRentalInfo.h"

void BicycleSharingSystem::run()
{
	ifstream inFp;
	ofstream outFp;
	inFp.open("input.txt");
	outFp.open("output.txt");

	int menuLevel1 = 0, menuLevel2 = 0, isProgramExit = 0;
	RegisteredMember members;
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
				isProgramExit = 1;
				outFp << "6.1. 종료";
				break;
			}
			break;
		}
	}
}