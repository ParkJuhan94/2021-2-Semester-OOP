#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class Dogschool;
class Dog
{
private:
	string name_;
	Dogschool* d_;
public:
	Dog(string name);

	Dog* getPtr();

	void SetSchool(Dogschool* d);
	void DropSchool();
	void SetName(string name);
	void Introduce();
};

#endif // !DOG_H

