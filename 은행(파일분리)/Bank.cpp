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
	count_++;
};

std::string Bank::getAccNum(Account* accptr) {
	return accptr->getAccNum();
};

void Bank::deposit(std::string accNum, int won) {
	for (int i = 0; i < count_; i++) {
		if (getAccNum(accptr_[i]) == accNum) {
			accptr_[i]->setBalance(won);
		}
	}
};

void Bank::withdraw(std::string accNum, int won) {
	for (int i = 0; i < count_; i++) {
		if (getAccNum(accptr_[i]) == accNum) {
			accptr_[i]->setBalance(-won);
		}
	}
};

//1���� 2�� ����
void Bank::transfer(std::string accNum1, std::string accNum2, int won) {
	for (int i = 0; i < count_; i++) {
		if (getAccNum(accptr_[i]) == accNum1) {
			for (int j = 0; j < count_; j++) {
				if (getAccNum(accptr_[j]) == accNum2) {
					accptr_[i]->setBalance(-won);
					accptr_[j]->setBalance(won);
				}
			}
		}
	}
};	

void Bank::showEverything() {
	std::cout << this->bankName_ << "�� �ִ� ��� ���¿� ���� ���� �����Դϴ�." << std::endl;

	for (int i = 0; i < count_; i++) {		
		std::cout << "[" << accptr_[i]->getPersonptr()->getPersonName() << "] " << accptr_[i]->getPersonptr()->getPersonRrNum() << std::endl;
		std::cout << accptr_[i]->getAccNum() << " " << accptr_[i]->getBalance() << std::endl;
	}
};