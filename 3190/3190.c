#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N, K, L;
	int i, j;
	int sec;
	char direc[105];
	int map[105][105] = { 0 };

	scanf("%d %d", &N, &K);	
	for (i = 0; i < K; i++)		//����� ��ġ �Է¹ޱ�
	{
		scanf("%d %d", &i, &j);
		map[i][j] = 1;
	}

	scanf("%d", &L);
	for (i = 0; i < L; i++)		//�̵���� �Է¹ޱ�
	{
		scanf("%d %s", &sec, );
	
	}
}