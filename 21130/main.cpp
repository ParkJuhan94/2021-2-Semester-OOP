#include <iostream>
#include "mylist.h"
class Rect {
public:
    Rect() {};
    Rect(int w, int h) :width_(w), height_(h) {
        //
    }
    int area() {
        return width_ * height_;
    }
    void show() {
        std::cout << "Rect " << width_ << " X " << height_ << std::endl;
    }
private:
    int width_, height_;
};

// << ������ �ʿ�
ostream & operator << (ostream & o, Rect r) {
    r.show();
    return o;
}

int main() {
    MyList<int> myIntList;

    myIntList.push_front(11);
    myIntList.push_front(22);
    myIntList.push_front(33);

    myIntList.push_back(66);
    myIntList.push_back(77);
    myIntList.push_back(88);

    myIntList.print();  // ������� ��� - 33 22 11 66 77 88

    MyList<Rect> myRectList;
    myRectList.push_back(Rect(1, 1));
    myRectList.push_back(Rect(2, 2));
    myRectList.push_back(Rect(3, 3));

    myRectList.print();  // ������� ��� <1 1> <2 2> <3 3> ó�� ��µǰ� �Ѵ�.
                            // << �����ڸ� �����ε��ϸ� �ȴ�. ���� ����� show()�� �̿�
    return 0;
}
