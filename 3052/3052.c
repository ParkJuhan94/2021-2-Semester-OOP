#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[10];	//입력받은 값
	int _a[10];	//입력받은 값을 42로 나눈 나머지
	int cnt[42] = { 0 };	//나머지를 0-41로 카운팅
	int sum_not_equal = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		_a[i] = a[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 42; j++) {
			if (_a[i] == j) {
				cnt[j]++;
			}
		}
	}

	for (int j = 0; j < 42; j++) {
		if (cnt[j] >= 1) {
			sum_not_equal++;
		}
	}
	printf("%d", sum_not_equal);
}