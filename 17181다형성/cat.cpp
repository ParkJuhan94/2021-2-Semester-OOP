#include "cat.h"
#include "petschool.h"
#include <string>
#include <iostream>
using namespace std;

Cat::Cat(string name):Pet(name) {
	p_[numPet_] = this;
	numPet_++;
}

void Cat::introduce() {
	cout << "�߿��� " << this->name_ << " �Դϴ�.";
	for (int i = 0; i < numSchool; i++) {
		cout << this->s_[i]->getSchoolName();
	}
	cout << "�� �ٴմϴ�." << endl;
}

void Cat::self() {
	cout << "���� �߿��� �̸��� " << this->name_ << endl;
}
