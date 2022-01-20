#include <stdio.h>
#include <math.h>

int main() {
	int n = 36;
	printf("%lf\n", sqrt(n));
}

 //프로토타입을 앞에서 선언해주면 함수의 정의에서 서로를 필요로 할 때, 
// 에러가 나지 않음.( 원래는, 먼저 선언하는 함수가 뒤에 선언되는 함수를 
//정의에 필요로 한다면 에러가 난다.)

