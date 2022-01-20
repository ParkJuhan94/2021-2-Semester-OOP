#include "dog.h"
#include<string>
#include<iostream>
using namespace std;

Dog::Dog(string name) {
    this->name_ = name;
}

void Dog::SetName(string name) {
    this->name_ = name;
}

void Dog::SetSchool(DogSchool* DogSchoolPtr) {
    this->DogSchoolPtr_ = DogSchoolPtr;
}

void Dog::DropSchool() {
    for (int i = 0; i < cnt_; i++) {
        if (DogSchoolPtr_->GetDogPtr(i)->name_ == this->name_) {
            for (int j = i < j < cnt - 1; j++) {
                DogSchoolPtr_->GetDogPtr(j) = DogSchoolPtr_->GetDogPtr(j + 1);
            }
        }
        DogSchoolPtr_->ReduceCnt();
    }
}

void Dog::Introduce() {
    cout << "¸Û¸Û, ³ª´Â " << this->name_ << "ÀÔ´Ï´Ù. ³ª´Â " << this->DogSchoolPtr_->GetName() << "¿¡ ´Ù´Õ´Ï´Ù." << endl;
}

