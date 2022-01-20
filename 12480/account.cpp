#include <string>
#include <iostream>
#include "Account.h"
#include "Person.h"

Account::Account(Person* p, string accNum){
	this->accNum_ = accNum;
	this->p_ = p;	
	p->setAccs(this);
};

std::string Account::getAccNum() {
	return this->accNum_;
};

Person* Account::getPersonptr() {
	return this->p_;
}

int Account::getBalance() {
	return this->balance_;
}

void Account::Deposit(int quantity) {
	this->balance_ += quantity;
}

void Account::TransferTo(Account* a, int quantity) {
	this->balance_ -= quantity;
	a->Deposit(quantity);
}

void Account::Report() {
	std::cout << "°èÁÂ¹øÈ£ " << this->accNum_ << std::endl << "ÁÖÀÎÀÌ¸§: " << this->p_->getPersonName()
		<< std::endl << "ÀÜ¾×: " << this->balance_ << std::endl;

	std::cout << std::endl;
}