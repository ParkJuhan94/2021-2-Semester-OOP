#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class RandomNum
{
private:
	int num;

public:
	void init() {
		srand(time(NULL));
	}

	int get() {		
		return rand() % 100;		
	}
};

int main() {
	int i;

	RandomNum ran; // 0~99������ ������ �߻��ϴ� ���� �߻���
	ran.init();   // �Ź� �ٸ� �������� ������ ���� ���� �ð����� �ʱ�ȭ �Ѵ�.
	for (i = 0; i < 10; i++) {
		cout << ran.get() << endl;  // get�Լ��� ���ο� ������ �����ִ� �޼ҵ�.
	}
}