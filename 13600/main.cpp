#include <iostream>
using namespace std;
#include "boy.h"
#include "girl.h"
int main() {
	CBoy* b;
	b = new CBoy("��ö��");
	CGirl* g;
	g = new CGirl("�ڿ���");
	b->SetGF(g);
	g->SetBF(b);
	b->Hello();
	g->Hello();
	delete b;
	g->Hello();
	// ������ ���� ��µǰ� �Ѵ�.: ���� ����. �ڿ����Դϴ�. ����ģ���� �����ϴ�.

	b = new CBoy("�ڿ���");
	b->SetGF(g);  g->SetBF(b);
	b->Hello();  g->Hello();
	delete g;
	b->Hello();
	// ������ ���� ��µǰ� �Ѵ�.: ���� ����. �ڿ����Դϴ�. ����ģ���� �����ϴ�.
}
