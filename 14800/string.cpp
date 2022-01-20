/*
* Hint: ������ std::string ���� �ٲٴ� ���� to_string�Լ��� ���� �ǰ� string�ڿ� string��
���̴� ���� append �޼ҵ带 ����ϸ� �ȴ�.
���⼭ add �޼ҵ�� ������ ��Ʈ������ �ٲپ� �ڿ� ���̴� �Լ��̰�,
space�� �� ĭ�� �ϳ� �ڿ� ���̴� �Լ��̴�.
* Hint 2: �����ڵ� ����� �־�� �Ѵ�. ���� ����� Ŭ������ �����ڴ� ���� Ŭ������ �����ڸ� ȣ���ϸ� �ȴ�.
* 
* ==> ���� ����� Hello 1234 5678 �� �ȴ�.
*/

#include <iostream>
#include <string>
using namespace std;
namespace my {
	// ���� �̸��� ���� stringŬ�������� namespace�� �����Ѵ�.	
	class string : public std::string {
	public:
		string(const char* s): std::string(s) {		//������ �Լ� �ʿ�
			
		}

		string& add(int n) {
			append(to_string(n));

			return *this;
		}

		string& space() {
			append(" ");

			return *this;
		}
	};
}
int main() {

	my::string s("Hello");
	s.space().add(1234).space().add(5678);
	cout << s << endl;
	return 0;
}
