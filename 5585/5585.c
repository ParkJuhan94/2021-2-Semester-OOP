#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c, d, e, f;
	int pay, change;

	scanf("%d", &pay);

	change = 1000 - pay;

	a = change / 500;
	change %= 500;

	b = change / 100;
	change %= 100;

	c = change / 50;
	change %= 50;

	d = change / 10;
	change %= 10;

	e = change / 5;
	change %= 5;

	f = change / 1;
	
	printf("%d\n", a + b + c + d + e + f);
}