#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;	//������ ����
	char arr[101];	//�Է¹��� ���ڸ� ����
	int sum = 0;

	scanf("%d", &n);
	scanf("%s", arr);
		
	for (int i = 0; i < n; i++) {		
		sum += arr[i] - '0';	//arr[i] - 48���� ���� ǥ��
	}

	printf("%d\n", sum);

}