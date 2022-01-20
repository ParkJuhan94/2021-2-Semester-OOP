#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Bank;
class Account;
class Person
{
private:
	string name_, rrNum_;
	Account* a_[10];
	int cnt_ = 0;
	Bank* b_;

public:
	Person(string name, string rrNum);

	string getPersonName();
	string getPersonRrNum();

	void setAcc(Account* a);
	void changeName(string name);
	void summary();	
};

#endif // !PERSON_H
