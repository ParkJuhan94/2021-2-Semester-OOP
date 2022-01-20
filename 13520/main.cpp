#define _CRT_SECURE_NO_WARNINGS
#include "myfile.h"
#include <iostream>
using namespace std;
int main() {
    try {
        MyFile* infile = new MyFile("hello.txt");
        infile->openForRead();  // 읽기용으로 연다.
        MyFile* outfile = new MyFile("hello2.txt");
        outfile->openForWrite();   // 쓰기용으로 연다.

        int c;
        // 이제 hello.txt 의 내용을 그대로 hello2.txt 에 복사한다.
        while (infile->mygetc(c) == true) {
            outfile->myputc(c);      // mygetc와 myputc는 각각 C언어의 fgetc fputc 대응.
        }

        outfile->close();   // 파일이 fclose 되어야 한다.
        delete infile;   // 파일이 close 되어야 한다.
        delete outfile;   // 이미 close 되어 있는 파일이다.

        // 다시 다른 파일을 열어서 작업한다.
        infile = new MyFile("data1.txt");
        infile->openForRead();
        int num;
        int sum = 0;
        while (infile->getInt(num)) {   // getInt는 정수값 하나를 입력
            sum += num;
        }
        cout << "합은 " << sum << endl;

    }
    catch (string msg) {
        cout << " 파일 " << msg << "을 열 수 없음" << endl;
    }

    try {
        MyFile* f = new MyFile("xxx"); /// 이런 이름의 파일이 없다.
        f->openForRead();   // 열기에 실패
    }
    catch (string msg) {
        cout << " 파일 " << msg << "을 열 수 없음" << endl;
    }

    try {
        MyFile* f2 = new MyFile("hello.txt");
        int c;
        f2->mygetc(c);   // open 하지 않았으므로 오류이다.
    }
    catch (string msg) {
        cout << msg << " 열리지 않았음" << endl;
    }
    return 0;
}
