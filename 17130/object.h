#pragma once

class List;
class Object
{
public:
	bool at(int x, int y);  // �� ��ü�� �־��� x, y ���� �����ϴ����� ���� (��輱 ����)	 
	Object(int x, int y);  // ������
	virtual void hit() = 0;
	virtual void show() = 0;

protected:
	List* l_;
	int x_, y_;
};

