// stl 의 list에서 상속받은 MyList 클래스를 정의한다.
#include <iostream>
#include <list>
using namespace std;

template <class T>
class MyList : public list<T> {
public:
    void show() {
        for (auto i = this->begin(); i != this->end(); i++) {
            cout << *i << ' ';
        }
        cout << endl;
    }

    void show_reverse(){
        for (auto i = this->rbegin(); i != this->rend(); i++) {
            cout << *i << ' ';
        }
        cout << endl;
    }

};

int main() {
    MyList<int> the_list;
    the_list.push_back(11);
    the_list.push_back(22);
    the_list.push_back(33);
    the_list.show();
    the_list.show_reverse();
    return 0;
}
