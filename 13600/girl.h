#ifndef _GIRL_H
#define _GIRL_H
#include <iostream>
using namespace std;

class CBoy;
class CGirl {
private:
	string name_;
	CBoy* bf_;
public:
	void SetBF(CBoy* g);
	CGirl(string n);
	~CGirl();
	void Hello();
	string Getname();
};
#endif
