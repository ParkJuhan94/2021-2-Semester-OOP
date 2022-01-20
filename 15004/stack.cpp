#include <iostream>
using namespace std;
class Stack {
public:
	class node {
	public:
		int data;
		node* next;
		node(int x, node* nxt) :data(x), next(nxt) {}
	};
	Stack(); void insert(int); int pop();
	void show();
protected:
	node* first;
};
Stack::Stack() { first = 0; }
void Stack::insert(int x) {
	node* temp;
	temp = new node(x, first);
	temp->next = first;
	first = temp;
}
int Stack::pop() {
	int retval;
	node* temp;
	if (first == 0) return -1;
	retval = first->data;
	temp = first;
	first = first->next;
	delete temp;
	return retval;
}

void Stack::show() {
	node* temp;
	for (temp = first; temp; temp = temp->next)
		cout << temp->data << " --> ";
	cout << "END\n";
}

//class PositiveStack 을 여기에 정의한다.
class PositiveStack {
public:
	PositiveStack() {
		s_ = new Stack;
	}

	~PositiveStack() {
		delete s_;
	}

	void insert(int n) {
		if (n < 0) {
			return;
		}
		else {
			s_->insert(n);
		}
	}

	void show() {
		s_->show();
	}
private:
	Stack* s_;
};

int main()
{
	Stack s;
	PositiveStack ps;

	s.insert(1);
	s.insert(2);
	s.insert(-3);
	s.insert(4);
	s.show();

	ps.insert(1);
	ps.insert(2);
	ps.insert(-3);
	ps.insert(4);
	ps.show();
}
