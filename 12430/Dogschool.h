#ifndef DOGSCHOOL_H
#define DOGSCHOOL_H
#include <string>
using namespace std;

class Dog;
class Dogschool
{
private:
	string schoolName_;
	Dog* d_[100];
	int cnt_ = 0;

public:
	Dogschool(string schoolName);

	std::string getSchoolName();

	void RegisterDog(Dog* d);
	void DropDog(Dog* d);
	void SetName(string schoolName);
	void ShowDogs();
};

#endif // !DOGSCHOOL_H

