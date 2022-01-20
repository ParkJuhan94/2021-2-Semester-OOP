#include <iostream>
char msg[] = "존재하지 않는 스트링입니다.";

void mystrprint(const char* s) {
	if (s == 0) {
		throw(msg);
	}
	while (*s) {	
		std::cout << *s;
		s++;
	}
}

void printName(const char* f, const char* l) {
	
	try {
		mystrprint(f);
	}
	catch (char* str) {
		std::cout << str << std::endl;
	}

	try {
		mystrprint(l);
	}
	catch (char* str) {
		std::cout << str << std::endl;
	}
	
	std::cout << std::endl;
}

int main() {
	char* firstname = (char*)"Lee";
	char* lastname = 0;

	printName(firstname, lastname);
	
	return 0;
}
