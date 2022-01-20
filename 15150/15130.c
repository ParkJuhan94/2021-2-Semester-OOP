#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int sum = 0;

	printf("정수를 입력하시오 : \n");
	scanf("%d", &n);

	for (int i = 1; i <= n - 1; i++) {
		sum += i * i;
		printf("%d + ", i * i);
	}
	printf("%d = ", n * n);
	sum += n * n;
	printf("%d", sum);

	return 0;
}