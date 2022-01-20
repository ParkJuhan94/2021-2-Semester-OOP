#include <iostream>
using namespace std;

class Animal {
public:
    Animal(const char* name) :name_(name) {
        //empty
    }
    void sayName() {
        cout << "���̸��� " << name_ << "�Դϴ�.\n";
    }
    virtual void speak() {
        cout << "����~~~~~~~~" << endl;
    }
protected:
    string name_;
};

class Cat : public Animal {
public:

    Cat(const char* name) :Animal(name) {
        //
    }
    void speak() override {
        cout << "�߿�! ";
        sayName();
    }
};

class Dog : public Animal {
public:
    Dog(const char* name) :Animal(name) {
        //
    }
    void speak() override {
        cout << "�۸�! ";
        sayName();
    }
};


class AnimalSchool {
public:
    static const int MAXANI = 100;
    void addAnimal(Animal* ani) {
        ani_[numAnimals++] = ani;
    }
    void callAllAnimals() {
        for (int i = 0; i < numAnimals; i++) {
            ani_[i]->speak();
        }
    }
private:
    Animal* ani_[MAXANI];
    int numAnimals = 0;
};



int main() {

    AnimalSchool* s = new AnimalSchool();
    s->addAnimal(new Cat("Kitty"));
    s->addAnimal(new Cat("�߿���"));
    s->addAnimal(new Dog("�ٵ���"));
    s->addAnimal(new Dog("������"));
    s->callAllAnimals();

    return 0;
}





