#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int tmp;	//a와 다른 값으로 초기화
	int cnt = 0;	//사이클횟수
	
	scanf("%d", &a);
	tmp = a;	//본래의 a값을 저장

	do{
		if (a < 10) {
			a = a * 10 + a;
			cnt++;
		}
		else {
			a = (a % 10) * 10 + (((a / 10) + a % 10) % 10);	//중요 로직
			cnt++;
		}
	} while (tmp != a);
	printf("%d", cnt);
}