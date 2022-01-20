#include <iostream>
#include "Account.h"
#include "Person.h"
using namespace std;
int main() {

	//������ ���� main ���α׷��� �����ϵ��� Person Ŭ������ AccountŬ������ �ۼ��϶�.
	//Account�� ����, Person�� ����� ��Ÿ���� Ŭ�����̴�.

	Person* p1 = new Person("ȫ�浿", "960101-1000123");  // �̸� �� �ֹι�ȣ
	Person* p2 = new Person("��Ʈ��", "960101-1000456");
	Account* a1, * a2;

	// �����ڿ��� ����� ���¸� ���� ������ �־�� �Ѵ�.
	a1 = new Account(p1, "111-22-3333"); // ������ �Ķ���ʹ� ���¹�ȣ
	a2 = new Account(p2, "111-22-4444");
	a1->Deposit(10000);  // ���� ����
	a2->Deposit(5000);  // 5õ�� ����
	a1->TransferTo(a2, 6000);  // a1���� a2�� �۱�
	a1->Report();  // ���¹�ȣ, ������ �̸�, ������ �ֹι�ȣ, �ܾ��� ���
	a2->Report();

	p1->Report(); // �� ����� �̸�, �ֹι�ȣ, ��������(���� ��ȣ, �ܾ�)

	//* ������Դ� �ִ� 10���� ���¸� ���� �� �ְ� �ϸ� �߰� 5��. 
	//( �� ��� main�� �Ʒ��� ���� �߰����� �׽�Ʈ �ڵ带 �־�� �Ѵ�.)	 
	Account* a3 = new Account(p1, "111-22-5555");
	a3->Deposit(9999);
	p1->Report();
}
