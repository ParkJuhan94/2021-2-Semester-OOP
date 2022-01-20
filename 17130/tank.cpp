#include "tank.h"
#include <iostream>
using namespace std;

Tank::Tank(int x, int y): Object(x, y) {
	//
}

void Tank::hit() {
	x_++;
	cout << "Tank Moving to " << x_ << ", " << y_ << endl;
}

void Tank::show() {
	cout << "Tank at " << x_ << ", " << y_ << endl;
}