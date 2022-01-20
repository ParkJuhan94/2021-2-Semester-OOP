#pragma once

class Object;
class List
{
public:
	void insert(Object*);
	Object* find(int x, int y);
	void showAll();  // 모든 객체에 대해 show를 호출한다.
protected:
	Object* o_[100];
	int numList_ = 0;

};

