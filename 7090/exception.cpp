#include <stdio.h>
char msg[] = "�������� �ʴ� ��Ʈ���Դϴ�.";

void mystrprint(const char* s) { 
	if (s == 0) {
		throw(msg);
	}	
	printf("��Ʈ����: %s �Դϴ�.\n", s);
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
