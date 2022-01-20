#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int b;
	int num_test;

	scanf("%d", &num_test);	//테스트 케이스의 개수 미리 입력받기

	for (int i = 0; i < num_test; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}