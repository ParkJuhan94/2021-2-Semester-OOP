#pragma once
#include<string>
using namespace std;

class Dog;
class DogSchool {
public:
    DogSchool(string name);
    void SetName(string name);
    string GetName();
    Dog* GetDogPtr(int cnt);
    int GetCnt();
    void ReduceCnt();
    void RegisterDog(Dog* DogPtr);
    void ShowDogs();
protected:
private:
    string SchoolName_;
    Dog* DogPtr_[100];
    int cnt_ = 0;
};
