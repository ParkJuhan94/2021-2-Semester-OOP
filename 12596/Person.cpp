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
		std::cout << "�����: " << this->a_[i]->getBankPtr()->getBankName() << std::endl;
		//std::cout << "�����: ��������" << std::endl;
		std::cout << "���¹�ȣ: " << this->a_[i]->getAccNum() << std::endl;
		std::cout << "�ܾ�: " << this->a_[i]->getBalance() << std::endl << std::endl;
	}
}