#ifndef EXITSYSTEM_H
#define EXITSYSTEM_H

#include <fstream>

#include "ExitSystemUI.h"

// 시스템 종료 use case 처리를 위한 control class
class ExitSystem
{
private:
	ExitSystemUI* exitSystemUI;
public:
	// 생성자
	ExitSystem(ofstream& outFp);
};

#endif 