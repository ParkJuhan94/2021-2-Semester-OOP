#ifndef GIRLGROUP_H
#define GIRLGROUP_H

#include <string>
using namespace std;

class Member;
class GirlGroup
{
private:
	string name_;
	Member* m_[4];
	int cnt_ = 0;
public:
	GirlGroup(string name);

	void setName(string name);

	void addMember(Member* m);
	void tellme();
};

#endif // !GIRLGROUP_H



