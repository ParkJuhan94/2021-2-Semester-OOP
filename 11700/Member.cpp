#include "Member.h"
#include <string>
#include <iostream>
using namespace std;

Member::Member(string name) {
	this->name_ = name;
}

Member* Member::getPtr() {
	return this;
}

void Member::setGroup(GirlGroup* g) {
	this->g_ = g;
}

void Member::tellme() {
	cout << this->name_ << " " << endl;
}