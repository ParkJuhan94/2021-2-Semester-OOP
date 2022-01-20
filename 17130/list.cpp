#include "list.h"
#include "object.h"
#include <iostream>
using namespace std;

void List::insert(Object* o) {
	o_[numList_++] = o;	
}

Object* List::find(int x, int y) {	
	
	for (int i = 0; i < numList_; i++) {
		if (o_[i]->at(x, y)) {
			return o_[i];
		}	
	}
	cout << "Not found" << endl;
	return 0;
}

void List::showAll() {  // 모든 객체에 대해 show를 호출한다.
	for (int i = numList_ - 1; i >= 0; i--) {
		o_[i]->show();
	}
}