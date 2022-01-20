#include <iostream>
using namespace std;
class List {
public:
	class iterator;
	class Link {
	private:
		int data_; Link* next_;
	public:
		Link(int n, Link* nxt) :data_(n), next_(nxt) {}
		int& getdata() { return data_; }
		Link* getnext() { return next_; }
		friend class iterator;
	};
	List() :first(0) {}
	void insert(int n) {
		Link* temp = new Link(n, first);
		first = temp;
	}

	class iterator {
	private:
		Link* ptr_;
	public:
		iterator() { ptr_ = 0; }
		iterator(Link* pp) { ptr_ = pp; }		
		void operator ++ () { /* ������ ptr_�� ���� */ 
			this->ptr_ = this->ptr_->getnext();
		}		

		bool operator != (iterator x) {
			//������ ���� ��.
			if (this->ptr_ == x.ptr_) {
				return false;
			}
			else {
				return true;
			}
		}

		int& operator * () {
			// ������ ptr_�� ����Ű�� ���� ���� �����ش�.
			return this->ptr_->getdata();
		}
	};

	Link* first;
public:
	iterator begin() { /* first�� ������ ���� �ݺ��ڸ� ����� �����ش�. */ 
		return iterator(this->first);
	}

	iterator end() { /* 0�� ������ ���� �ݺ��ڸ� ����� �����ش�. */ 
		return iterator(0);
	}
};

int main() {
	List myList;
	myList.insert(1);
	myList.insert(2);
	myList.insert(3);
	List::iterator i;

	for (i = myList.begin(); i != myList.end(); ++i)
		cout << *i << endl;
}
