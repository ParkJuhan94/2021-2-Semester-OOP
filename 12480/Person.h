#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Account;
class Person
{
private:
	string name_, rrNum_;
	Account* a_[10];
	string accNum_[10];
	int cnt = 0;

public:
	Person(string name, string rrNum);
	string getPersonName();
	string getPersonRrNum();

	void setAccs(Account* a);
	void Report();
};

#endif // !PERSON_H



