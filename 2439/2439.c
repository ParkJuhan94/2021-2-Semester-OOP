#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {		//첫째 for문의 i는 내부의 for문들의 기준이 됨.
		for (int j = 1; j <= n - i; j++) {	//내부의 첫째 for문. i 값을 기준으로 함.
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {		//내부의 둘째 for문. i 값을 기준으로 함.
			printf("*");
		}
		printf("\n");
	}
}