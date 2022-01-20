#include <stdio.h>
char msg[] = "존재하지 않는 스트링입니다.";

void mystrprint(const char* s) { 
	if (s == 0) {
		throw(msg);
	}	
	printf("스트링은: %s 입니다.\n", s);
}

#include <iostream>
using namespace std;
int main() {
	const char* s1 = (char*)"Hello";
	const char* s2 = 0;

	try {
		mystrprint(s1);
	}
	catch (char* str) {
		cout << msg << endl;
	}
	
	try {
		mystrprint(s2);
	}
	catch (char* str) {
		cout << msg << endl;
	}
	
}
