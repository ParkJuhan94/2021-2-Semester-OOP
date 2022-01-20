#include "dogschool.h"
#include<iostream>
#include<string>
using namespace std;


DogSchool::DogSchool(string name) {
    this->SchoolName_ = name;
}

void DogSchool::SetName(string name) {
    this->SchoolName_ = name;
}

Dog* DogSchool::GetDogPtr(int cnt) {
    return this->DogPtr_[cnt];
}

int DogSchool::GetCnt() {
    return cnt_;
}

void DogSchool::ReduceCnt() {
    this->cnt_--;
}

string DogSchool::GetName() {
    return this->SchoolName_;
}

void DogSchool::RegisterDog(Dog* DogPtr) {
    this->DogPtr_[cnt_] = DogPtr;

    DogPtr_[cnt_]->SetSchool(this);

    ++cnt_;
}

void DogSchool::ShowDogs() {
    for (int i = 0; i < cnt_; i++) {
        this->DogPtr_[i]->Introduce();
    }
}
