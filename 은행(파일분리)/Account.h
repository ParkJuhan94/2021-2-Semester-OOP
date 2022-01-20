#pragma once
//#include <iostream>
#include "Person.h"
#include<string>
using namespace std;

class Account
{
private:
	string accNum_;
	int balance_;
	Person* p_;
public:
	Account(string accNum, Person* p, int balance);
	string getAccNum();
	Person* getPersonptr();
	int getBalance();
	void setBalance(int balance);
};