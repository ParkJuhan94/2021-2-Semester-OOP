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

	RandomNum ran; // 0~99사이의 난수를 발생하는 난수 발생기
	ran.init();   // 매번 다른 난수열이 나오기 위해 현재 시각으로 초기화 한다.
	for (i = 0; i < 10; i++) {
		cout << ran.get() << endl;  // get함수는 새로운 난수를 돌려주는 메소드.
	}
}