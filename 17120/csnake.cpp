#include "csnake.h"
#include <string>
#include <iostream>
using namespace std;

Canimal::Canimal(int x, int y) : Canimal(x, y) {

}

void Canimal::goLeft() {

}

void Canimal::goRight() {

}

void Canimal::goForward() {

}

void Canimal::goBackward() {
	x_--;
	y_--;
}

void Csnake::hello() {
	cout << "저는 snake 입니다.";
}