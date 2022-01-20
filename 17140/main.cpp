#include <iostream>
#include "account.h"
#include "minusaccount.h"
#include "savingsaccount.h"
using namespace std;
int main() {
	Account* acc = new Account();
	acc->deposit(100);
	if (acc->withdraw(200)) {
		cout << "���� ����" << endl;
	}
	else {
		cout << "�ܾ� ����" << endl;
	}
	acc->deposit(100);
	cout << acc->getBalance() << endl;


	Account *mc = new MinusAccount(-1000); // �ִ� -1000������ ���.
	mc->deposit(100);
	mc->withdraw(600);
	mc->withdraw(600);

	cout << mc->getBalance() << endl;

	Account *sa = new SavingsAccount();  // �Աݸ� �ϰ� ����� �ȵǴ� ����
	sa->deposit(1000);
	sa->deposit(2000);
	sa->withdraw(1000);
	cout << sa->getBalance() << endl;
	
	return 0;
}
