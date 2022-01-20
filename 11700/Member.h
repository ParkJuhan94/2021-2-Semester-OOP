#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;


class GirlGroup;
class Member
{
private:
	string name_;
	GirlGroup* g_;
	Member* m_;
public:
	Member(string name);

	Member* getPtr();
	void setGroup(GirlGroup* g);
	
	void tellme();
};


#endif // !MEMBER_H


