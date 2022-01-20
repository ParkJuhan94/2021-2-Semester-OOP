#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num1;		//(1)입력용 변수
	int num2;		//(2)입력용 변수
	int multiply1;	//(3)
	int multiply2;	//(4)
	int multiply3;	//(5)
	int multiply;	//(6)

	scanf("%d %d", &num1, &num2);

	multiply1 = num1 * (num2 % 10);
	multiply2 = num1 * ((num2 % 100) / 10);
	multiply3 = num1 * (num2 / 100);
	multiply = 1 * multiply1 + 10 * multiply2 + 100 * multiply3;
	
	printf("%d\n", multiply1);
	printf("%d\n", multiply2);
	printf("%d\n", multiply3);
	printf("%d\n", multiply);
}