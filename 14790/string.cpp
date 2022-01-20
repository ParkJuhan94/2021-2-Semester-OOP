/*
* Hint: 정수를 std::string 으로 바꾸는 것은 to_string함수를 쓰면 되고 string뒤에 string을
붙이는 것은 append 메소드를 사용하면 된다.
여기서 add 메소드는 정수를 스트링으로 바꾸어 뒤에 붙이는 함수이고,
space는 빈 칸을 하나 뒤에 붙이는 함수이다. (add 와 space는 물론 my::string에서 만들어 주어야 한다.)

* Hint 2: 생성자도 만들어 주어야 한다. 새로 만드는 클래스의 생성자는 원래 클래스의 생성자를 호출하면 된다.
*/
#include <iostream>
#include <string>
using namespace std;
namespace my {
	// 같은 이름을 가진 string클래스지만 namespace로 구분한다.
	
	class string: public std::string{
	public:
		string(const char* s) {			//생성자 함수 필요
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
