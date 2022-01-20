#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "myfile.h"
using namespace std;

MyFile::MyFile() {
    this->fp_ = NULL;
}

MyFile::~MyFile() {
    if (this->close_ == 1) {
        //비어있음
    }
    else {
        close();
    }
}

MyFile::MyFile(const char* name) {
    this->name_ = name;
    this->strName_ = name;
}

void MyFile::openForRead() {
    if ((this->fp_ = fopen(this->name_, "r")) == NULL) {
        throw this->strName_;
    }
}

void MyFile::openForWrite() {
    this->fp_ = fopen(this->name_, "w");
}

bool MyFile::mygetc(int c) {
    int& temp = c;
    if (this->fp_ == NULL) {
        throw this->strName_;
    }
    else {
        if ((temp = fgetc(fp_)) == EOF) {
            return 0;
        }
        else {            
            return 1;
        }
    }
}

void MyFile::myputc(int c) {
    fputc(this->c_, this->fp_);
}

void MyFile::close() {
    cout << "파일 " << this->name_ << " 이 닫힙니다." << endl;
    fclose(this->fp_);
    this->close_ = 1;
}

bool MyFile::getInt(int num) {
    int& temp = num;
    if ((temp = fgetc(fp_)) == EOF) {
        return 0;
    }
    else {
        return 1;
    }
}
