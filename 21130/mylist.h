#pragma once
#include <iostream>
using namespace std;

template <class T>
class MyList {
	class MyLink {
	public:
		MyLink() {}
		T data_;
		MyLink* next;
	};
public:
	MyList() :first_(0) {}
	void push_front(T data) {
		MyLink* t = new MyLink();
		t->next = first_;
		t->data_ = data;
		first_ = t;
	}

	void push_back(T data) {
		MyLink* t = new MyLink();
		
		//no list exists
		if (first_ == NULL)
		{
			first_ = t;
			t->data_ = data;
		}

		//list exists
		else
		{
			MyLink* horse = first_;

			while (horse->next != NULL)
			{
				horse = horse->next;
			}

			horse->next = t;	
			t->data_ = data;
		}
			
	}

	void print() {
		MyLink* p;
		cout << "START: ";
		for (p = first_; p; p = p->next) {
			cout << p->data_ << " --> ";
		}
		cout << "END" << endl;
	}
private:
	MyLink* first_;
};