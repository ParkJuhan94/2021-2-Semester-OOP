#include <iostream>
using namespace std;

template <class T>
class List {	
	class Link {
	public:
		Link() {}
		T data_;
		Link* next;
	};
public:
	List() :first_(0) {}
	void insert(T data) {
		Link* t = new Link();
		t->next = first_;
		t->data_ = data;
		first_ = t;
	}
	void printall() {
		Link* p;
		cout << "START: ";
		for (p = first_; p; p = p->next) {
			cout << p->data_ << " --> ";
		}
		cout << "END" << endl;
	}
private:
	Link* first_;
};

int main() {
	List<int> il;
	il.insert(1); il.insert(2); il.insert(3);
	il.printall();

	// double을 넣을 수 이는 리스트 dl 선언 
	List<double> dl;
	dl.insert(1.1); dl.insert(2.2); dl.insert(3.3);
	dl.printall();
}
