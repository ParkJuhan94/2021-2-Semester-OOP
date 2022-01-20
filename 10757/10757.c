#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int i;

//���ڿ��� �¿� �ݴ�� �ٲ���. index�� �ڸ����� �����ϱ�����
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
	char res[10005] = { 0 };	//result. �հ�
	int sum;
	int carry = 0;

	scanf("%s %s", a, b);
	ReverseStr(a);
	ReverseStr(b);

	int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);	////a�� b�� �� ���� ����

	for (i = 0; i < len; i++)
	{	
		sum = a[i] - '0' + b[i] - '0' + carry;
			//a[i]�� b[i]�� �ϳ��� NULL�� ��� ���ʿ��� ������ �����.
			//���� '0'�� res[i]�� ����� �� ������ ���Ͽ� ����������.		
		while (sum < 0)	sum += '0';									
		if (sum >= 10) carry = 1;
		else carry = 0;			
		res[i] = sum % 10 + '0';
	}
	if (carry == 1) res[len] = '1';

	ReverseStr(res);
	printf("%s", res);	
}