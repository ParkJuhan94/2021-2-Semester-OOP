#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x;
	int y;
	
	scanf("%d %d", &x, &y);
	if (x * y > 0) {	//1��и�, 3��и�
		if (x > 0) {
			printf("1\n");
		}
		else {
			printf("3\n");
		}		
	}
	else {	//2��и�, 4��и�
		if (x < 0) {
			printf("2\n");
		}
		else {
			printf("4\n");
		}		
	}
}