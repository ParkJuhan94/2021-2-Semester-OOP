#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void num_hansoo() {
	int n;
	int cnt = 0;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		if (i < 10) {
			cnt++;
		}
		else if (i < 100) {
			cnt++;
		}
		else {
			if ((i / 100 - i % 100 / 10) == (i % 100 / 10 - i % 10)) {
				cnt++;
			}
		}	
	}
	printf("%d\n", cnt);
}

int main() {
	num_hansoo();
}