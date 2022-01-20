#include "mystring.h"
#include <iostream>

// �� ������ �����ϸ� �ȵ�.

void Print(MyString s) {
    std::cout << "[" << s.getPtr() << "]" << std::endl;
}

// �޸� ������ �ؾ� ������ �� ���� �� �ִ�.

int main() {
    MyString s("Hello");
    MyString* t = new MyString(" world");

    s.add(*t);
    Print(*t);
    delete t;
    std::cout << "END" << std::endl;

    return 0;
}
