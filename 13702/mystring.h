#pragma once
class MyString {
public:
    MyString(const char*);
    ~MyString();
    void add(MyString& t);
    const char* getPtr();

private:
    char* str_;
};
