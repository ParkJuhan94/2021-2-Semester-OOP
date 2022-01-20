#include "mystring.h"
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

//  add �Լ��� strcpy �� strcat �� ����ϸ� �ȴ�.
MyString::MyString(const char* s) {
	str_ = strdup(s);
}

MyString::~MyString() {
	free(str_);
}

void MyString::add(MyString& t) {
	strcpy(str_, t.getPtr());
	strcat();
}

const char* MyString::getPtr() {
	return str_;
}