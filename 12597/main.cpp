#include <iostream>
#include "book.h"
#include "person.h"
#include "catalog.h"

using namespace std;
int main() {
	Catalog* ct = new Catalog("����īŻ�α�");
	Person* p1 = new Person("���۰�", "980101-1000111");  // �̸� �� �ֹι�ȣ
	Person* p2 = new Person("���۰�", "980102-1000222");

	Book* a1, * a2, * a3;
	a1 = new Book(p1, "111-22-3333", "���� �ֺ�����");   // �Ķ���ʹ� ����*  ISBN, ����
	a2 = new Book(p1, "111-22-4444", "����������� �ڸŵ�");
	a3 = new Book(p2, "111-55-5555");    //  å ������ ������ "���� ����"���� ���ش�.

	ct->addBook(a1);
	ct->addBook(a2);
	ct->addBook(a3);

	std::cout << "================================" << std::endl;
	ct->summary(); // īŻ�α׸�, ��ϵ� ���  ���� ����(������, ISBN, ��������) ���
	std::cout << "================================" << std::endl;
	p1->summary(); // �� ������ ����(�̸�, �ֹι�ȣ) �� ���� ���� ���� ������ ����Ѵ�.
	std::cout << "================================" << std::endl;
	p1->changeName("���");
	ct->summary();
	std::cout << "================================" << std::endl;
}
