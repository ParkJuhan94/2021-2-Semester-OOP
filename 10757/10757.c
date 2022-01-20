#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int i;

//문자열을 좌우 반대로 바꿔줌. index와 자릿수를 통일하기위해
void ReverseStr(char str[]) {

	char tmp;

	for (i = 0; i < strlen(str) * (0.5); i++) 
	{
		tmp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = tmp;
	}
}

int main() {
	char a[10005] = { 0 };
	char b[10005] = { 0 };
	char res[10005] = { 0 };	//result. 합계
	int sum;
	int carry = 0;

	scanf("%s %s", a, b);
	ReverseStr(a);
	ReverseStr(b);

	int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);	////a와 b중 긴 놈의 길이

	for (i = 0; i < len; i++)
	{	
		sum = a[i] - '0' + b[i] - '0' + carry;
			//a[i]나 b[i]중 하나라도 NULL일 경우 불필요한 뺄셈이 생긴다.
			//빼진 '0'을 res[i]가 양수가 될 때까지 더하여 복원시켜줌.		
		while (sum < 0)	sum += '0';									
		if (sum >= 10) carry = 1;
		else carry = 0;			
		res[i] = sum % 10 + '0';
	}
	if (carry == 1) res[len] = '1';

	ReverseStr(res);
	printf("%s", res);	
}