#pragma once

class Object;
class List
{
public:
	void insert(Object*);
	Object* find(int x, int y);
	void showAll();  // ��� ��ü�� ���� show�� ȣ���Ѵ�.
protected:
	Object* o_[100];
	int numList_ = 0;

};

