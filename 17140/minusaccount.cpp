#include "minusaccount.h"
MinusAccount::MinusAccount(int m):line_(m) {
	//
}

bool MinusAccount::withdraw(int m) {
	if (this->getBalance() + 1000 < m) 
		return false;
	else {
		this->setBalance(-m);
		return true;
	}
}