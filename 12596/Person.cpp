#include <string>
#include <iostream>
#include "Account.h"
#include "Person.h"
#include "Bank.h"

Person::Person(std::string name, std::string rrNum) {
	this->name_ = name;
	this->rrNum_ = rrNum;
}

std::string Person::getPersonName() {
	return this->name_;
}

std::string Person::getPersonRrNum() {
	return this->rrNum_;
}

void Person::setAcc(Account* a) {
	this->a_[cnt_] = a;

	cnt_++;
}

void Person::changeName(string name) {
	this->name_ = name;
}

void Person::summary() {
	std::cout << this->name_ << " " << this->rrNum_ << std::endl;

	for (int i = 0; i < cnt_; i++) {
		std::cout << "은행명: " << this->a_[i]->getBankPtr()->getBankName() << std::endl;
		//std::cout << "은행명: 명지은행" << std::endl;
		std::cout << "계좌번호: " << this->a_[i]->getAccNum() << std::endl;
		std::cout << "잔액: " << this->a_[i]->getBalance() << std::endl << std::endl;
	}
}