/*
* Hint: ������ std::string ���� �ٲٴ� ���� to_string�Լ��� ���� �ǰ� string�ڿ� string��
���̴� ���� append �޼ҵ带 ����ϸ� �ȴ�.
���⼭ add �޼ҵ�� ������ ��Ʈ������ �ٲپ� �ڿ� ���̴� �Լ��̰�,
space�� �� ĭ�� �ϳ� �ڿ� ���̴� �Լ��̴�. (add �� space�� ���� my::string���� ����� �־�� �Ѵ�.)

* Hint 2: �����ڵ� ����� �־�� �Ѵ�. ���� ����� Ŭ������ �����ڴ� ���� Ŭ������ �����ڸ� ȣ���ϸ� �ȴ�.
*/
#include <iostream>
#include <string>
using namespace std;
namespace my {
	// ���� �̸��� ���� stringŬ�������� namespace�� �����Ѵ�.
	
	class string: public std::string{
	public:
		string(const char* s) {			//������ �Լ� �ʿ�
			std::string str(s);	
			s_ = str;
		}

		string& add(int n) {
			s_ = s_.append(to_string(n));

			return *this;
		}

		string& space() {
			s_ = s_.append(" ");

			return *this;
		}
	private:	
		std::string s_;
	};
}
int main() {

	my::string s("Hello");
	
	s.space().add(1234).space().add(5678);
	cout << s << endl;
	return 0;
}
