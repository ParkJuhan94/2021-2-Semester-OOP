#pragma once
#include "account.h"
class SavingsAccount: public Account
{
public:
	SavingsAccount();
	bool withdraw(int m) override;
};

