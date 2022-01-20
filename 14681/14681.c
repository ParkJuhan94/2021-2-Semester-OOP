#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x;
	int y;
	
	scanf("%d %d", &x, &y);
	if (x * y > 0) {	//1사분면, 3사분면
		if (x > 0) {
			printf("1\n");
		}
		else {
			printf("3\n");
		}		
	}
	else {	//2사분면, 4사분면
		if (x < 0) {
			printf("2\n");
		}
		else {
			printf("4\n");
		}		
	}
}