#include "dog.h"
#include "petschool.h"
#include <string>
#include <iostream>
using namespace std;

Dog::Dog(string name):Pet(name) {
	p_[numPet_] = this;
	numPet_++;
}

void Dog::introduce() {
	cout << "�۸��� " << this->name_ << " �Դϴ�.";
	for (int i = 0; i < numSchool; i++) {
		cout << this->s_[i]->getSchoolName();
	}
	cout << "�� �ٴմϴ�." << endl;
}

void Dog::self() {
	cout << "���� �۸��� �̸��� " << this->name_ << endl;
}
