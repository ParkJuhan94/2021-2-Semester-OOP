#include "petschool.h"
#include "pet.h"
#include "dog.h"
#include "cat.h"
#include <string>
#include <iostream>
void putline() { std::cout << "-----" << std::endl; }

int main() {

    PetSchool p1("力老 切背");
    PetSchool p2("疙瘤 切背");

    Dog* d1 = new Dog("大大1");
    Dog* d2 = new Dog("大大2");
    Cat* c1 = new Cat("具克1");
    Cat* c2 = new Cat("具克2");
    Cat* c3 = new Cat("具克3");

    p1.registerPet(d1);
    p1.registerPet(d2);
    p1.registerPet(c1);
    p2.registerPet(d1);
    p2.registerPet(c1);
    p2.registerPet(c2);
    p2.registerPet(c3);

    putline();
    p1.showPets();

    putline();
    p2.showPets();

    putline();
    d1->introduce();

    putline();
    d1->showFriends();

    p2.rename("MJ");
    c1->rename("Cat1");

    putline();
    d1->showFriends();
    return 0;
}
