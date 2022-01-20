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
	std::cout << "¼º¸í: " << this->name_ << std::endl << "ÁÖ¹Î¹øÈ£: " << this->rrNum_ << std::endl;

	for (int i = 0; i < cnt; i++) {
		std::cout << "°èÁÂ¹øÈ£ " << a_[i]->getAccNum() << " ÀÜ¾× " << a_[i]->getBalance() << std::endl;
	}

	std::cout << std::endl;
}