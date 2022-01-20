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
        if (size_ == max_) return; // throw해주면 더 좋지만 간단히...
        data_[size_++] = n;
    }

    class iterator {
    private:
        int* p; // 특정 배열 항목의 주소를 이용한다.
    public:
        // 생성자를 정의한다.
        iterator(): p(0) {
            //
        }
        iterator(int* pp) {
            this->p = pp;
        }
        // 연산자들을 정의한다.
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
    iterator begin() {     // 특정 배열 항목의 주소를 이용한다. 
        return iterator(data_);
    }
    iterator end() {
        return iterator(data_ + max_);
    }

private:
    int* data_;
    int size_;  // 현재 크기
    int max_;   // 최대 크기
};

int main() {
    MyVector vec(10);  // 최대 10개 넣을 수 있는 벡터
    for (int i = 0; i < 20; i++) {
        vec.insert(i);
    }
    MyVector::iterator i;

    for (auto i = vec.begin(); i != vec.end(); ++i)
        cout << *i << endl;
}
