#include <iostream>
#include <string>
#include "Bank.h"
#include "Account.h"
#include "Person.h"

//using namespace std;

Bank::Bank(std::string bankName) {
	this->bankName_ = bankName;
};

void Bank::addAccount(Account* accptr) {
	this->accptr_[count_] = accptr;
	accptr->setBankPtr(this);

	count_++;
};

int Bank::getAccNum(Account* accptr) {
	return accptr->getAccNum();
};

std::string Bank::getBankName() {
	return this->bankName_;
}

Bank* Bank::getPtr() {
	return this;
}

void Bank::deposit(int accNum, int won) {
	for (int i = 0; i < count_; i++) {
		if (getAccNum(accptr_[i]) == accNum) {
			accptr_[i]->deposit(won);
		}
	}
};

void Bank::withdraw(int accNum, int won) {
	for (int i = 0; i < count_; i++) {
		if (getAccNum(accptr_[i]) == accNum) {
			accptr_[i]->deposit(-won);
		}
	}
};

void Bank::summary() {
	std::cout << "���� �̸�: " << this->bankName_ << std::endl << "�� " << count_ << "���� ���°� �ֽ��ϴ�." << std::endl << std::endl;

	for (int i = 0; i < count_; i++) {
		std::cout << "���¹�ȣ: " << accptr_[i]->getAccNum() << endl;
		std::cout << "������: " << accptr_[i]->getPersonptr()->getPersonName() << " " << accptr_[i]->getPersonptr()->getPersonRrNum() << endl;
		std::cout << "�ܾ�: " << accptr_[i]->getBalance() << std::endl << std::endl;
	}
};