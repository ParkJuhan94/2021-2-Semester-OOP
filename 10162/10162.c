#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c;
	int time;

	scanf("%d", &time);

	a = time / 300;
	time %= 300;
	
	b = time / 60;
	time %= 60;
	
	c = time / 10;
	time %= 10;

	if (time != 0) {
		printf("-1\n");
	}
	else {
		printf("%d %d %d", a, b, c);
	}
}