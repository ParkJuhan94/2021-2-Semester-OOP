#include <iostream>
#include <list>
using namespace std;

class Rectangle {
public:
    Rectangle(int w, int h) :width_(w), height_(h) {}
    int width_, height_;
};

template <class T>
class MyList : public list<T> {
public:
    void show() {
        for (auto i = this->begin(); i != this->end(); i++) {
            cout << *i << ' ';
        }
        cout << endl;
    }

    void show_reverse() {
        for (auto i = this->rbegin(); i != this->rend(); i++) {
            cout << *i << ' ';
        }
        cout << endl;
    }

};

ostream& operator << (ostream & o, Rectangle r) {
    o << r.width_ << ", " << r.height_ << endl;

    return o;
}

int main() {
    MyList<int> the_list;
    the_list.push_back(11);
    the_list.push_back(22);
    the_list.push_back(33);
    the_list.show();
    the_list.show_reverse();

    MyList<Rectangle> list2;
    list2.push_back(Rectangle(1, 2));
    list2.push_back(Rectangle(2, 3));
    list2.push_back(Rectangle(3, 4));
    list2.show();
    list2.show_reverse();
    return 0;
}
