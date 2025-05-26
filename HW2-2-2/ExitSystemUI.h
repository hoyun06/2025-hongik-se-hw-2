#ifndef EXITSYSTEMUI_H
#define EXITSYSTEMUI_H

#include <fstream>

using namespace std;

// 시스템 종료 use case 처리를 위한 boundary class
class ExitSystemUI
{
public:
	// 시스템이 종료되었음을 파일에 출력하는 함수
	void startInterface(ofstream& outFp);
};

#endif