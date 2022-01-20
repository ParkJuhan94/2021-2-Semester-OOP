#include <string>
#include "Account.h"
#include "Person.h"
#include <iostream>

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

void Person::setAccs(Account* a) {	
	this->a_[cnt] = a;

	this->cnt++;
}

void Person::Report() {
	std::cout << "����: " << this->name_ << std::endl << "�ֹι�ȣ: " << this->rrNum_ << std::endl;

	for (int i = 0; i < cnt; i++) {
		std::cout << "���¹�ȣ " << a_[i]->getAccNum() << " �ܾ� " << a_[i]->getBalance() << std::endl;
	}

	std::cout << std::endl;
}