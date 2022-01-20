#include <iostream>
#include "account.h"
#include "minusaccount.h"
#include "savingsaccount.h"
using namespace std;
int main() {
	Account* acc = new Account();
	acc->deposit(100);
	if (acc->withdraw(200)) {
		cout << "인출 성공" << endl;
	}
	else {
		cout << "잔액 부족" << endl;
	}
	acc->deposit(100);
	cout << acc->getBalance() << endl;


	Account *mc = new MinusAccount(-1000); // 최대 -1000원까지 허용.
	mc->deposit(100);
	mc->withdraw(600);
	mc->withdraw(600);

	cout << mc->getBalance() << endl;

	Account *sa = new SavingsAccount();  // 입금만 하고 출금은 안되는 계좌
	sa->deposit(1000);
	sa->deposit(2000);
	sa->withdraw(1000);
	cout << sa->getBalance() << endl;
	
	return 0;
}
