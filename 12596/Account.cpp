#include <string>
#include "Account.h"
#include "Person.h"
#include "Bank.h"

Account::Account(Person* p, int accNum, int balance)
{
	this->accNum_ = accNum;
	this->p_ = p;
	this->balance_ = balance;
	p->setAcc(this);
};

Account::Account(Person* p, int accNum)
{
	this->accNum_ = accNum;
	this->p_ = p;
	this->balance_ = 100;
	p->setAcc(this);
};

void Account::setBankPtr(Bank* b) {
	this->b_ = b;
}

Bank* Account::getBankPtr() {
	return this->b_;
}

int Account::getAccNum() {
	return this->accNum_;
};

void Account::deposit(int balance) {
	this->balance_ += balance;
}

Person* Account::getPersonptr() {
	return this->p_;
}

int Account::getBalance() {
	return balance_;
}

void Account::transferTo(int quantity, Account* a) {
	this->deposit(-quantity);
	a->deposit(quantity);
}