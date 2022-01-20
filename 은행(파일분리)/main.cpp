#include <iostream>
#include "Bank.h"
#include "Account.h"
#include "Person.h"

//using namespace std;

int main() {
	Bank* theBank = new Bank("��������");
	Account* a, * b;
	Person* p1, * p2;

	p1 = new Person("ȫ�浿", "950101-1234567");
	p2 = new Person("��浿", "951212-1234568");

	a = new Account("11112222", p1, 10000); // ȫ�浿�� ���� 11112222, 10000��
	b = new Account("11113333", p2, 20000);

	theBank->addAccount(a);   // �ִ� 100���� Account�� ������ �� �ֵ��� ������ �迭�� ����Ѵ�.
	theBank->addAccount(b);

	theBank->deposit("11112222", 3000);  // ���� ��ȣ�� �˻��ؼ� �Ա��ؾ��Ѵ�.
	theBank->withdraw("11112222", 2000);
	theBank->transfer("11112222", "11113333", 1000);
	// 11112222���¿��� 11113333���·� 1000�� ��ü

	theBank->showEverything();  // ���࿡ �ִ� ��� ���¿� ���� ���� ����(���� ���� ����, �ܾ�)�� ���.
}