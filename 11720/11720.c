#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;	//숫자의 개수
	char arr[101];	//입력받은 숫자를 저장
	int sum = 0;

	scanf("%d", &n);
	scanf("%s", arr);
		
	for (int i = 0; i < n; i++) {		
		sum += arr[i] - '0';	//arr[i] - 48보다 좋은 표현
	}

	printf("%d\n", sum);

}