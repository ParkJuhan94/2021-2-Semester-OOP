#ifndef BANK_H
#define BANK_H

#include <string>
using namespace std;

class Account;
class Bank
{
private:
	Account* accptr_[100];
	int accNum_;
	string bankName_;
	int won_;
	int count_ = 0;
public:
	Bank(string bankName);
	
	int getAccNum(Account* accptr);
	string getBankName();
	Bank* getPtr();

	void addAccount(Account* accptr);
	void deposit(int accNum, int won);
	void withdraw(int accNum, int won);
	
	void summary();
};


#endif // !BANK_H


