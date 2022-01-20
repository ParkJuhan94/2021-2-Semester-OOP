#ifndef _BOY_H
#define _BOY_H
#include <iostream>
using namespace std;

class CGirl;
class CBoy {
private:
	string name_;  // Boy 이름
	CGirl* gf_;	// 여친 포인터
public:
	void SetGF(CGirl* g); // 여친 포인터 저장
	CBoy(string n);		// 생성자
	~CBoy();
	void Hello();
	string Getname();	// 이름 돌려주기.
};
#endif
