#include "canimal.h"
#include "ccrab.h"
#include "cfrog.h"
#include "csnake.h"
#include <iostream>
using namespace std;

int main() {
	Canimal* ptr[3];
	ptr[0] = new Ccrab(10, 10);
	ptr[1] = new Cfrog(0, 0);
	ptr[2] = new Ccrab(20, 20);

	for (int i = 0; i < 3; i++) {
		ptr[i]->goBackward();
		ptr[i]->goForward();
		ptr[i]->goLeft();
		ptr[i]->goRight();

		cout << ptr[i]->hello();
		cout << "현재 저의 위치는" << ptr[i]->getPosX() << ", " << ptr[i]->getPosY() << "입니다." << endl;
	}
}


