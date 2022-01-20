#include <iostream>
#include "Account.h"
#include "Person.h"
#include "Bank.h"

using namespace std;
int main() {
	Bank* b = new Bank("��������");
	Person* p1 = new Person("ȫ�浿", "980101-1000111");  // �̸� �� �ֹι�ȣ
	Person* p2 = new Person("��Ʈ��", "980102-1000222");

	Account* a1, * a2, * a3;
	a1 = new Account(p1, 111221111, 10000);   // �Ķ���ʹ�  Person *, ���¹�ȣ, �ʱ� �ݾ�. 
	a2 = new Account(p1, 111222222, 20000);    //  ���� ��ȣ�� ������ �Ѵ�.
	a3 = new Account(p2, 111223333);    // �ݾ��� ���� ���� 100������ ������ش�. (���� ������)

	b->addAccount(a1);
	b->addAccount(a2);
	b->addAccount(a3);
	a1->deposit(1000); // õ�� �Ա�
	a2->transferTo(10000, a3);  // a2���� a3�� ���� ��ü

	std::cout << "================================" << std::endl;
	b->summary(); // �����, ��ϵ� ���  ���� ����(���¹�ȣ, ������ �̸�, �ֹι�ȣ, �ܰ�) ���
	std::cout << "================================" << std::endl;
	p1->summary(); // �� ������ ����(�̸�, �ֹι�ȣ) �� �����ϰ� �ִ� �� ������ ����(�����, ���¹�ȣ, �ܰ�) �� ����Ѵ�.
	std::cout << "================================" << std::endl;
	p1->changeName("�Ӳ���");
	b->summary();
	std::cout << "================================" << std::endl;
}
