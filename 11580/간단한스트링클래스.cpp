#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class String {
private:
	char* str_content;
	int str_len = 0;	
	char* str_buf;
public:
	String() {
		str_content = new char[1];
		strcpy(str_content, "");
	}

	String(const char* str) {
		str_len = strlen(str);
		str_content = new char[str_len];
		strcpy(str_content, str);
	}

	int get_len() {
		return strlen(this->str_content);
	}

	const char* bufString() {
		return str_content;
	}

	void copy(String S) {
		int cpy_len = S.get_len();
		str_content = new char[cpy_len];
		strcpy(str_content, S.bufString());
	}

	void add(String S){
		str_buf = new char[S.get_len()];
		strcat(str_content, S.bufString());
	}

	void print() {
		str_len = strlen(str_content);

		for (int i = 0; i < str_len; i++) {
			cout << str_content[i];
		}
		cout << endl;
		//cout << "���̴� :" << strlen(str_content) << endl;
	}
};
	

int main() {
	String s1;    // �� ��� "" �� �ǰ� �ؾ� �Ѵ�. (���� 0 �� ��Ʈ��)
	String s2("Hello");
	String s3("world");
	s1.copy(s2);  // s1�� ������ Hello�� �ȴ�.
	s1.add(s3);   // Helloworld�� �ȴ�.
	s1.print();   // ����� �Ѵ�.
}