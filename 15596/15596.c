#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long sum(int* a, int n) {
	long long _sum = 0;
	for (int i = 0; i < n; i++) {
		_sum += *(a + i);
	}
	return _sum;
}

int main() {
	int a[5] = { 1, 3, 5, 7, 9 };
	printf("%lld\n", sum(a, 4));
}