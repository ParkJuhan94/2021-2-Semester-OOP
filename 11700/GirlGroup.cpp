#include "GirlGroup.h"
#include <string>
#include <iostream>
using namespace std;

GirlGroup::GirlGroup(string name) {
	this->name_ = name;
}

void GirlGroup::setName(string name) {
	this->name_ = name;
}

void GirlGroup::addMember(Member* m) {
	this->m_[cnt_] = m;

	cnt_++;
}

void GirlGroup::tellme() {
	cout << this->name_ << endl;
}