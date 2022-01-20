#include "mystring.h"
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

//  add 함수는 strcpy 와 strcat 을 사용하면 된다.
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