#pragma once

class List;
class Object
{
public:
	bool at(int x, int y);  // 이 객체가 주어진 x, y 점을 포함하는지의 여부 (경계선 포함)	 
	Object(int x, int y);  // 생성자
	virtual void hit() = 0;
	virtual void show() = 0;

protected:
	List* l_;
	int x_, y_;
};

