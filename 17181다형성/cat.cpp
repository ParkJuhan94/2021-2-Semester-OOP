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
	cout << "야옹이 " << this->name_ << " 입니다.";
	for (int i = 0; i < numSchool; i++) {
		cout << this->s_[i]->getSchoolName();
	}
	cout << "에 다닙니다." << endl;
}

void Cat::self() {
	cout << "나는 야옹이 이름은 " << this->name_ << endl;
}
