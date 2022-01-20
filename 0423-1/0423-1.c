#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int input[100];
	int n;  // 입력받을 정수의 갯수

	printf("입력할 정수의 갯수는 :\n");
	scanf("%d", &n);
	

	printf("정수들을 입력하시오 :\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}
	
}