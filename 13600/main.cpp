#include <iostream>
using namespace std;
#include "boy.h"
#include "girl.h"
int main() {
	CBoy* b;
	b = new CBoy("김철수");
	CGirl* g;
	g = new CGirl("박영은");
	b->SetGF(g);
	g->SetBF(b);
	b->Hello();
	g->Hello();
	delete b;
	g->Hello();
	// 다음과 같이 출력되게 한다.: 나는 여자. 박영은입니다. 남자친구는 없습니다.

	b = new CBoy("박영수");
	b->SetGF(g);  g->SetBF(b);
	b->Hello();  g->Hello();
	delete g;
	b->Hello();
	// 다음과 같이 출력되게 한다.: 나는 남자. 박영수입니다. 여자친구는 없습니다.
}
