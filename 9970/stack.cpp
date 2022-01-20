#include <iostream>
#define MAXSTACK 1000
using namespace std;

class Stack 
{
private:
	int stack_[MAXSTACK];
	int sp_ = 0;  // 초기화

public:
	//초기화하기
	void init() {
		sp_ = 0;
	}

	// insert one integer
	void push(int x) {
		if (sp_ < MAXSTACK)
			stack_[sp_++] = x;
	}

	// is the stack empty?
	int isEmpty() {
		return sp_ == 0; // sp가 0이면 true를 돌려주고 아니면 false를 돌려준다.
	}

	// return the top element
	int top() {
		return stack_[sp_ - 1];
	}

	// remove the top element, if any
	void pop() {
		if (!isEmpty()) sp_--;
	}
};

int main(){
	Stack mystack;
	mystack.init();
	int num;

	while ( cin >> num )
	{
		mystack.push(num);
	}

	while (!mystack.isEmpty()) 
	{
	   cout  << mystack.top()<< " --> ";
	   mystack.pop();
	}
	cout << "END\n";
}
 
/* C 버전:
	int main() {
	push(1); push(2); push(3);

	while (!isEmpty()) {
		cout << top() << " --> ";
		pop();
	}
	cout << "END\n";
	return 0;
}

*/