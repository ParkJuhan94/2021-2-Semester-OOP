#include "mystring.h"
#include <iostream>

// 이 파일은 수정하면 안됨.

void Print(MyString s) {
    std::cout << "[" << s.getPtr() << "]" << std::endl;
}

// 메모리 관리를 해야 점수를 다 받을 수 있다.

int main() {
    MyString s("Hello");
    MyString* t = new MyString(" world");

    s.add(*t);
    Print(*t);
    delete t;
    std::cout << "END" << std::endl;

    return 0;
}
