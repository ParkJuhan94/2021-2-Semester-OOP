#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<string>
using namespace std;

class Person;
class Account
{
private:
	string accNum_;
	int balance_;
	Person* p_;

public:
	Account(Person* p, string accNum);
	string getAccNum();
	Person* getPersonptr();
	int getBalance();

	void Deposit(int quantity);
	void TransferTo(Account* a, int quantity);	
	void Report();
};

#endif // !ACCOUNT_H

