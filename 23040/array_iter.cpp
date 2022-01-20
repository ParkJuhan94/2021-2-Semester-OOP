#include <iostream>
using namespace std;
class MyVector {
public:
    MyVector(int max) :size_(0), max_(max) {
        data_ = new int[max_];
    }
    ~MyVector() {
        delete[] data_;
    }

    void insert(int n) {
        if (size_ == max_) return; // throw���ָ� �� ������ ������...
        data_[size_++] = n;
    }

    class iterator {
    private:
        int* p; // Ư�� �迭 �׸��� �ּҸ� �̿��Ѵ�.
    public:
        // �����ڸ� �����Ѵ�.
        iterator(): p(0) {
            //
        }
        iterator(int* pp) {
            this->p = pp;
        }
        // �����ڵ��� �����Ѵ�.
        bool operator != (iterator i) {
            if (this->p < i.p) {
                return true;
            }
            else {
                return false;
            }
        }

        void operator ++ () {
            this->p++;
        }

        int& operator *() {
            return *(this->p);
        }

    };
public:
    iterator begin() {     // Ư�� �迭 �׸��� �ּҸ� �̿��Ѵ�. 
        return iterator(data_);
    }
    iterator end() {
        return iterator(data_ + max_);
    }

private:
    int* data_;
    int size_;  // ���� ũ��
    int max_;   // �ִ� ũ��
};

int main() {
    MyVector vec(10);  // �ִ� 10�� ���� �� �ִ� ����
    for (int i = 0; i < 20; i++) {
        vec.insert(i);
    }
    MyVector::iterator i;

    for (auto i = vec.begin(); i != vec.end(); ++i)
        cout << *i << endl;
}
