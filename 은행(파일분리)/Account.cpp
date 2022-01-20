#include <string>
#include "Account.h"
#include "Person.h"
#include "Bank.h"

Account::Account(std::string accNum, Person* p, int balance) 
{
	this->accNum_ = accNum;
	this->p_ = p;
	this->balance_ = balance;
};

std::string Account::getAccNum() {
	return this->accNum_;
};

void Account::setBalance(int balance) {
	this->balance_ += balance;
}

Person* Account::getPersonptr() {
	return this->p_;
}

int Account::getBalance() {
	return balance_;
}