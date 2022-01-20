#include <iostream>
using namespace std;
class CStack {
public:
	class node {
	public:
		int data;
		node* next;
		node(int x, node* nxt) :data(x), next(nxt) {}
	};
	CStack(); void insert(int); int pop();
	void show();
protected:
	node* first;
};
CStack::CStack() { first = 0; }
void CStack::insert(int x) {
	node* temp;
	temp = new node(x, first);
	temp->next = first;
	first = temp;
}
int CStack::pop() {
	int retval;
	node* temp;
	if (first == 0) return -1;
	retval = first->data;
	temp = first;
	first = first->next;
	delete temp;
	return retval;
}

void CStack::show() {
	node* temp;
	for (temp = first; temp; temp = temp->next)
		cout << temp->data << " --> ";
	cout << "END\n";
}

//class CEvenStack 을 여기에 정의한다. 상속 방식.
class CEvenStack: public CStack {
public:
	void insert(int n) {
		if (n % 2 == 0) {
			CStack::insert(n);
		}
		else {
			return;
		}
	}
};


int main()
{
	CStack s;
	CEvenStack es;

	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.show();

	es.insert(1);
	es.insert(2);
	es.insert(3);
	es.insert(4);
	es.show();
}
