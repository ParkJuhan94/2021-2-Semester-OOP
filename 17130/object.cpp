#include "object.h"
#include "list.h"

bool Object::at(int x, int y) {
	if ((x_ <= x && x <= x_ + 2) && (y_ <= y && y <= y_ + y)) {
		return true;
	}else{
		return false;
	}
}

Object::Object(int x, int y) : x_(x),y_(y) {
	//
}

void Object::hit() {
	//empty
}

void Object::show() {
	//empty
}