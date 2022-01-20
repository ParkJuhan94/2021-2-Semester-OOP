#pragma once
#include "account.h"
class MinusAccount: public Account
{
public:
	MinusAccount(int m);
	bool withdraw(int m) override;
private:
	int line_;
};

