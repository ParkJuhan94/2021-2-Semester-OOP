#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int b;	

	for (int i = 0; scanf("%d %d", &a, &b) == 2 ; i++) {	//���� ����
		printf("%d\n", a + b);
	}
}