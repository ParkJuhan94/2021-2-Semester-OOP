#include <iostream>
using namespace std;

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
        std::cout << "Rect " << width_ << " X " << height_;
    }
private:
    int width_, height_;
};

template <class T>
class MyList {
public:
    class MyLink {
    public:
        MyLink() {}
        T data_;
        MyLink* next_;
    };

    MyList() : first_(0) {};

    void push(T data) {
        MyLink* t = new MyLink();
        t->next_ = first_;
        t->data_ = data;
        first_ = t;
    }

    void print() {
        MyLink* p;
        for (p = first_; p; p = p->next_) {
            cout << p->data_ << " ";
        }
        cout << endl;
    }
private:
    MyLink* first_;
};

// << ������ �ʿ�
ostream& operator << (ostream & o, Rect r) {
    r.show();
    return o;
}

int main() {
    MyList<int> myIntList;

    myIntList.push(11);
    myIntList.push(22);
    myIntList.push(33);

    myIntList.print();  // ������� ��� - 33 22 11 

    MyList<Rect> myRectList;
    myRectList.push(Rect(1, 1));
    myRectList.push(Rect(2, 2));
    myRectList.push(Rect(3, 3));

    myRectList.print();  // ������� ��� <3 3> <2 2> <1 1>   ó�� ��µǰ� �Ѵ�.
                            // << �����ڸ� �����ε��ϸ� �ȴ�. ���� ����� show()�� �̿�
    return 0;
}
