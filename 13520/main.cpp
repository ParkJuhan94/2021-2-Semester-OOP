#define _CRT_SECURE_NO_WARNINGS
#include "myfile.h"
#include <iostream>
using namespace std;
int main() {
    try {
        MyFile* infile = new MyFile("hello.txt");
        infile->openForRead();  // �б������ ����.
        MyFile* outfile = new MyFile("hello2.txt");
        outfile->openForWrite();   // ��������� ����.

        int c;
        // ���� hello.txt �� ������ �״�� hello2.txt �� �����Ѵ�.
        while (infile->mygetc(c) == true) {
            outfile->myputc(c);      // mygetc�� myputc�� ���� C����� fgetc fputc ����.
        }

        outfile->close();   // ������ fclose �Ǿ�� �Ѵ�.
        delete infile;   // ������ close �Ǿ�� �Ѵ�.
        delete outfile;   // �̹� close �Ǿ� �ִ� �����̴�.

        // �ٽ� �ٸ� ������ ��� �۾��Ѵ�.
        infile = new MyFile("data1.txt");
        infile->openForRead();
        int num;
        int sum = 0;
        while (infile->getInt(num)) {   // getInt�� ������ �ϳ��� �Է�
            sum += num;
        }
        cout << "���� " << sum << endl;

    }
    catch (string msg) {
        cout << " ���� " << msg << "�� �� �� ����" << endl;
    }

    try {
        MyFile* f = new MyFile("xxx"); /// �̷� �̸��� ������ ����.
        f->openForRead();   // ���⿡ ����
    }
    catch (string msg) {
        cout << " ���� " << msg << "�� �� �� ����" << endl;
    }

    try {
        MyFile* f2 = new MyFile("hello.txt");
        int c;
        f2->mygetc(c);   // open ���� �ʾ����Ƿ� �����̴�.
    }
    catch (string msg) {
        cout << msg << " ������ �ʾ���" << endl;
    }
    return 0;
}
