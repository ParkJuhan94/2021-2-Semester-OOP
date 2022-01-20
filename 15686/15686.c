#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int pick[15];
int m;
int num_home = 0;
int num_chicken = 0;

typedef struct point {
	int r;	//��. 0���� ��������
	int c;	//��. 0���� ��������
	int min;	//ġŲ �Ÿ�
}_point;

int distance_chiken(_point a, _point b){	//�Ÿ� ����
	int r, c;
	
	if (a.r > b.r)
	{
		r = a.r - b.r;
	}
	else
	{
		r = b.r - a.r;
	}

	if (a.c > b.c)
	{
		c = a.c - b.c;
	}
	else
	{
		c = b.c - a.c;
	}
	return r + c;
}

//ġŲ�� �� m���� ���,,,, �� ���� ġŲ�Ÿ�
int min_distance_chicken(int pick_cnt, int m, _point home[], _point chicken[]) {
	int i;
	int min = 99999;
	int sum = 0;

	if (pick_cnt == m)
	{
		return sum;
	}	

	for (i = 0; i < m; i++)
	{		
		min_distance_chicken(pick_cnt + 1, m, home[], chicken[]);
	}

	for (i = 0; i < num_home; i++)
	{
		min = 99999;
		for (j = 0; j < num_chicken; j++)
		{
			if (distance_chiken(home[i], chicken[j]) < min)
			{
				min = distance_chiken(home[i], chicken[j]);
				home[i].min = min;
			}
		}
	}
}

int main() {
	int n;
	int i, j;
	int* arr; 
	_point home[100];
	_point chicken[13];	

	scanf("%d %d", &n, &m);
	arr = (int*)malloc(sizeof(int) * (n * n + 5));	

	for (i = 0; i < n * n + 5; i++) {	//0���� �ʱ�ȭ
		arr[i] = 0;
	}
	
	for (i = 0; i < n * n; i++)		//map �Է¹ޱ�
	{		
		scanf("%d", &arr[i]);		
		
		if (arr[i] == 1)	//�� ��ġ�� ����
		{
			home[num_home].r = i / n;
			home[num_home].c = i % n;
			num_home++;
		}
		else if (arr[i] == 2) {		//ġŲ�� ��ġ�� ����
			chicken[num_chicken].r = i / n;
			chicken[num_chicken].c = i % n;
			num_chicken++;
		}
	}

	/*
	printf("���� ��ġ: ");
	for (i = 0; i < num_home; i++) {
		printf("(%d, %d) ", home[i].r, home[i].c);
	}

	printf("\n");

	printf("ġŲ���� ��ġ: ");
	for (i = 0; i < num_chicken; i++) {
		printf("(%d, %d) ", chicken[i].r, chicken[i].c);
	}
	*/			
}