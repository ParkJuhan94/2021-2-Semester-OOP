#pragma once
#include<string>
using namespace std;

class DogSchool;
class Dog {
public:
    Dog(string name);
    void SetName(string name);
    void SetSchool(DogSchool* DogSchoolPtr);
    void DropSchool();
    void Introduce();
protected:
private:
    string name_;
    DogSchool* DogSchoolPtr_;
};
