/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Answer = 0;

int main(void)
{
	int T, test_case;
	int i;		//�ڽ��� ��ȣ
	int j, k, tmp;
	int n;		//�� ���̽��� ������� ��
	int* di;	//i + Di�� �����Ҵ����� ����
	int* cnt;	//�ִ�ģ���׷����� ī���� �Ǿ����� ����. 1�̸� ī���� 0 �̸� notī����
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using scanf function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */
	freopen("input.txt", "r", stdin);

	 /*
		If you remove the statement below, your program's output may not be recorded
		when your program is terminated after the time limit.
		For safety, please use setbuf(stdout, NULL); statement.
	  */
	setbuf(stdout, NULL);

	scanf("%d", &T);
	for (test_case = 0; test_case < T; test_case++)
	{
		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		scanf("%d", &n);
		di = (int*)malloc(sizeof(int) * (n + 1));
		cnt = (int*)malloc(sizeof(int) * (n + 1));

		for (i = 1; i <= n; i++)
		{
			scanf("%d", di + i);
		}

		for (i = 1; i <= n; i++)
		{
			*(cnt + i) = 0;
		}

		for (i = 1; i <= n; i++)
		{
			if(*(di + i) + i <= n)
			{
				//printf("ģ���� �ִµ�,\n");
				tmp = *(di + i) + i;
				if (*(cnt + i) == 1  || *(cnt + tmp) == 1)
				{
					//printf("���� �̹� �ȷο� ���߰ų� ģ���� �̹� �ȷο� ����\n");
					Answer--;
				}

				*(cnt + i) = 1;
				*(cnt + tmp) = 1;


				if (*(di + tmp) + tmp <= n)
				{
					//printf("ģ���� ģ������ ����\n");
					tmp = *(di + tmp) + tmp;
					if (*(cnt + tmp) == 1)
					{
						//printf("ģ���� ģ���� �̹� �ȷο� ����\n");
						Answer--;
					}
					*(cnt + tmp) = 1;
					Answer++;					
				}
				else 
				{
					//printf("ģ���� ģ���� ����\n");
					Answer++;
				}
			}
			else 
			{
				//printf("ģ�� ����\n");
				if (*(cnt + i) == 1)
				{
					//printf("�ȷο� ���� ���\n");
					//�������
				}
				else
				{
					Answer++;
				}
			}
		}

		free(di);
		 /////////////////////////////////////////////////////////////////////////////////////////////

				 // Print the answer to standard output(screen).

		printf("Case #%d\n", test_case + 1);
		printf("%d\n", Answer);

	}

	return 0;//Your program should return 0 on normal termination.
}