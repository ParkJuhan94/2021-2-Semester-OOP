#ifndef _BOY_H
#define _BOY_H
#include <iostream>
using namespace std;

class CGirl;
class CBoy {
private:
	string name_;  // Boy �̸�
	CGirl* gf_;	// ��ģ ������
public:
	void SetGF(CGirl* g); // ��ģ ������ ����
	CBoy(string n);		// ������
	~CBoy();
	void Hello();
	string Getname();	// �̸� �����ֱ�.
};
#endif
