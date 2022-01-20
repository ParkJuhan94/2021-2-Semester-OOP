#include "Dogschool.h"
#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;

Dogschool::Dogschool(string schoolName) {
	this->schoolName_ = schoolName;
}

string Dogschool::getSchoolName() {
	return this->schoolName_;
}

void Dogschool::RegisterDog(Dog* d) {
	this->d_[cnt_] = d;
	d->SetSchool(this);

	cnt_++;
}

void Dogschool::DropDog(Dog* d) {
	for (int i = 0; i < cnt_; i++) {
		if (d_[i]->getPtr() == d) {
			for (int j = i; j < cnt_ - 1; j++) {
				d_[j] = d_[j + 1];
			}
		}
	}
	cnt_--;
}

void Dogschool::SetName(string schoolName) {
	this->schoolName_ = schoolName;
}

void Dogschool::ShowDogs() {
	cout << "여기는 " << this->schoolName_ << "입니다." << endl << "학생들을 소개합니다." << endl;

	for (int i = 0; i < cnt_; i++) {
		this->d_[i]->Introduce();
	}

	cout << endl;
}