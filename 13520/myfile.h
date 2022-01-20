#pragma once
#include <string>
using namespace std;

class MyFile
{
public:
    MyFile();
    ~MyFile();
    MyFile(const char* name);
    void openForRead();
    void openForWrite();
    bool mygetc(int c);
    void myputc(int c);
    void close();
    bool getInt(int num);
private:
    const char* name_;
    FILE* fp_;
    int c_;
    int close_ = 0;
    string strName_;
};


