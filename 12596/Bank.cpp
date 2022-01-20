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
	std::cout << "은행 이름: " << this->bankName_ << std::endl << "총 " << count_ << "개의 계좌가 있습니다." << std::endl << std::endl;

	for (int i = 0; i < count_; i++) {
		std::cout << "계좌번호: " << accptr_[i]->getAccNum() << endl;
		std::cout << "예금주: " << accptr_[i]->getPersonptr()->getPersonName() << " " << accptr_[i]->getPersonptr()->getPersonRrNum() << endl;
		std::cout << "잔액: " << accptr_[i]->getBalance() << std::endl << std::endl;
	}
};