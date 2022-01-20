#include "cfrog.h"
#include <string>
#include <iostream>
using namespace std;

Cfrog::Cfrog(int x, int y) : Canimal(x, y) {

}

void Cfrog::goLeft() {

}

void Cfrog::goRight() {

}

void Cfrog::goForward() {
	y_ += 5;
}

void Cfrog::goBackward() {

}

void Cfrog::hello() {
	cout << "저는 frog 입니다.";
}