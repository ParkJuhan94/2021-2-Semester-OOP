#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int	group(int _n) {	//n�� ���° �׷쿡 ���ϴ��� ��ȯ
	int i;
	for (i = 1; !((i-1)*(i) / 2 < _n && _n <= (i)*(i+1) / 2)   ; i++)
	{
		//�������
	}
	return i;
}


int in_group(int _n) {	//�׷� �ȿ��� ���° ���� ��ȯ
	int i;
	for (i = 1; !((i - 1) * (i) / 2 < _n && _n <= (i) * (i + 1) / 2); i++)
	{
		//�������
	}
	return _n - (i - 1) * (i) / 2;
}

int main() {
	int n, top, bottom;
	
	scanf("%d", &n);
	
	if (group(n) % 2)
	{
		top = group(n) - in_group(n) + 1;
		bottom = in_group(n);
	}
	else
	{
		bottom = group(n) - in_group(n) + 1;
		top = in_group(n);
	}
	printf("%d/%d", top, bottom);
}