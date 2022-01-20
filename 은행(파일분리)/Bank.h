#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Account.h"
using namespace std;

class Bank
{
private:
	Account* accptr_[100];
	string accNum_, bankName_;
	int won_;
	int count_ = 0;
public:
	Bank(string bankName);

	void addAccount(Account* accptr);
	string getAccNum(Account* accptr);

	void deposit(string accNum, int won);
	void withdraw(string accNum, int won);
	void transfer(string accNum1, string accNum2, int won);	//1¿¡¼­ 2·Î º¸³¿

	void showEverything();
};

