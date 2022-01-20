
#include "account.h"
Account::Account():balance_(0){
	// Default »ý¼ºÀÚ
}

void Account::deposit(int m){
	balance_ += m;
}

bool Account::withdraw(int m){
	if (balance_ < m) return false;
	else {
		balance_ -= m;
		return true;
	}
}

int Account::getBalance(){
	return balance_;
}

void Account::setBalance(int m) {
	this->balance_ += m;
}
