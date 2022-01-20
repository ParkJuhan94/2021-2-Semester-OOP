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

//class CEvenStack 을 여기에 정의한다. composition방식.
class CEvenStack {
public:
	CEvenStack() {
		s_ = new CStack;
	}

	~CEvenStack() {
		delete s_;
	}
	void insert(int n) {
		if (n % 2 == 0) {
			s_->insert(n);
		}
		else {
			return;
		}
	}

	void show() {
		s_->show();
	}
private:
	CStack* s_;
};


int main()
{
	CEvenStack ps;
	ps.insert(1);
	ps.insert(2);
	ps.insert(3);
	ps.insert(4);
	ps.insert(5);
	ps.insert(6);
	ps.show();
}
