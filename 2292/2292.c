#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum_hexagon(int _n) {	//벌집의 최대값을 반환
	int sum = 1;

	for (int i = 0; i <= _n; i++ ) {
		sum += 6 * i;
	}
	return sum;
}


int main() {
	int a;
	int i;	//sum_hexagon에 입력할 값. 육각형 한 변의 점의 개수

	scanf("%d", &a);

	for (i = 1; !(sum_hexagon(i - 2) <= a && a <= sum_hexagon(i - 1)); i++) {
		//비어있음
	}

	printf("%d", i);
}