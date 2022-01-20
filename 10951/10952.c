#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 1;
	int b = 1;	//for문의 처음 시작을 위해서 a, b를 1로 초기화

	for (int i = 0; (a + b) != 0; i++) {	//실행이 끝나는 조건 유의
		scanf("%d %d", &a, &b);
		if (!(a == 0 & b == 0)) {		//a와 b가 0일때는 출력 안돼야함
			printf("%d\n", a + b);
		}
	}
}