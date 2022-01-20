#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num_test;
	int a, b;

	scanf("%d", &num_test);
	for (int i = 0; i < num_test; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);	//case1, 2, 3, ...
	}
}