#include <iostream>
using namespace std;

class Dia {
public:
    Dia(float size):size_(size) {
        //
    }

    virtual void show() {
        cout << "����" << endl;
    }

    void tellSize() {
        cout << size_ << "�Դϴ�.\n";
    }

    virtual float getArea_() {
        return size_;
    }
protected:
    float size_;  //
};

class Circle: public Dia {
public:
    Circle(float size) :Dia(size) {
        //
    }
    void show() {
        cout << "���� ��. ������ ";
        tellSize();
    }
    
    float getArea_() override {
        return size_ * size_ / 4 * 3.14;
    }
};

class Square: public Dia {
public:
    Square(float size) :Dia(size) {
        //
    }
    void show() {
        cout << "���� ���簢��. �� ���� ũ��� ";
        tellSize();
    }
   
    float getArea_() override {
        return size_ * size_;
    }
};

class FigureCollection {
public:
    void addDia(Dia* d) {
        d_[numD_++] = d;
    }
    
    void showAll() {
        for (int i = 0; i < numD_; i++) {
            d_[i]->show();
            cout << d_[i]->getArea_() << endl;
        }
    }

private:
    Dia* d_[100];
    int numD_ = 0;    
};

int main() {
    FigureCollection* s = new FigureCollection();
    s->addDia(new Circle(2));
    s->addDia(new Circle(4));
    s->addDia(new Square(2));
    s->addDia(new Square(4));
    s->showAll();
    return 0;
}
