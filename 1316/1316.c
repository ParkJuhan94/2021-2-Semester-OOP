#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int groupnum(char a[], int len) {	//�׷�ѹ��� 1�� ��ȯ, �ƴϸ� 0�� ��ȯ
	int dist;
	int i, j;

	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (a[i] == a[j]) 
			{
				dist = j - i;

				if (dist >= 2)
				{
					if (a[j - 1] != a[j])					
						return 0;					
				}
			}
		}
	}
	return 1;
}

int main() {
	int test, sum = 0;
	char arr[101];

	scanf("%d", &test);

	for (int i = 0; i < test; i++)	//�׽�Ʈ �ݺ�
	{	
		scanf("%s", arr);
		sum += groupnum(arr, strlen(arr));		
	}
	printf("%d\n", sum);
}