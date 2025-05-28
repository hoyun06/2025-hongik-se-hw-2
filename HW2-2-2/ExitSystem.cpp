#include "ExitSystem.h"

// boundary class인 ExitSystemUI 생성
// ExitSystemUI의 startInterface를 호출하여 시스템 종료 처리
ExitSystem::ExitSystem(ofstream& outFp)
{
	this->exitSystemUI = new ExitSystemUI();
	this->exitSystemUI->startInterface(outFp);
}