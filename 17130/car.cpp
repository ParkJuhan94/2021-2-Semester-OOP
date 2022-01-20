#include "car.h"
#include <iostream>
using namespace std;
Car::Car(int x, int y): Object(x, y) {
	//
}

void Car::hit() {
	y_++;
	cout << "Car Moving to " << x_ << ", " << y_ << endl;
}

void Car::show() {
	cout << "Car at " << x_ << ", " << y_ << endl;
}