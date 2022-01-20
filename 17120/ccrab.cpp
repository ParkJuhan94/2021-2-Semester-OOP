#include "ccrab.h"
#include <string>
#include <iostream>
using namespace std;

Ccrab::Ccrab(int x, int y) : Canimal(x, y) {

}

void Ccrab::goLeft() {
	x_--;
}

void Ccrab::goRight() {
	x_ += 2;
}

void Ccrab::goForward() {

}

void Ccrab::goBackward() {

}

void Ccrab::hello() {
	cout << "저는 crab 입니다.";
}