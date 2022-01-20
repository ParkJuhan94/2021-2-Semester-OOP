#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Person;
class Bank;
class Account
{
private:
	int accNum_;
	int balance_;
	Person* p_;
	Bank* b_;

public:
	Account(Person* p, int accNum, int balance);
	Account(Person* p, int accNum);

	int getAccNum();
	Person* getPersonptr();
	int getBalance();
	void setBankPtr(Bank* b);
	Bank* getBankPtr();

	void deposit(int balance);
	void transferTo(int quantity, Account* a);
};

#endif // !ACCOUNT_H

