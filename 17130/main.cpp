#include<iostream>
#include "object.h"
#include "list.h"
#include "tank.h"
#include "car.h"
using namespace std;

int main() {
	int i;
	int x, y;
	List* theList = new List;
	Object* t;

	cin >> x >> y;
	theList->insert(new Tank(x, y));
	
	cin >> x >> y;
	theList->insert(new Tank(x, y));

	cin >> x >> y;
	theList->insert(new Car(x, y));

	cin >> x >> y;
	theList->insert(new Car(x, y));

	cout << "Now testing .." << endl;
	
	for (i = 0; i < 6; i++) {
		cin >> x >> y;
		if (t = theList->find(x, y)) {
			t->hit();			
		}		
	}	

	cout << endl << "Now, show all objects ..." << endl;
	theList->showAll();	
}