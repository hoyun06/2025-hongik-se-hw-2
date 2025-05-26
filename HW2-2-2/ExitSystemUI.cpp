#include "ExitSystemUI.h"

// 시스템이 종료되었음을 파일에 출력
void ExitSystemUI::startInterface(ofstream& outFp)
{
	outFp << "6.1. 종료";
}