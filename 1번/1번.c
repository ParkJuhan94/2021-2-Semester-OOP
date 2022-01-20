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
	int i;		//자신의 번호
	int j, k, tmp;
	int n;		//각 케이스의 사람들의 수
	int* di;	//i + Di를 동적할당으로 저장
	int* cnt;	//최대친구그룹으로 카운팅 되었는지 저장. 1이면 카운팅 0 이면 not카운팅
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
				//printf("친구가 있는데,\n");
				tmp = *(di + i) + i;
				if (*(cnt + i) == 1  || *(cnt + tmp) == 1)
				{
					//printf("내가 이미 팔로우 당했거나 친구가 이미 팔로우 당함\n");
					Answer--;
				}

				*(cnt + i) = 1;
				*(cnt + tmp) = 1;


				if (*(di + tmp) + tmp <= n)
				{
					//printf("친구의 친구까지 있음\n");
					tmp = *(di + tmp) + tmp;
					if (*(cnt + tmp) == 1)
					{
						//printf("친구의 친구가 이미 팔로우 당함\n");
						Answer--;
					}
					*(cnt + tmp) = 1;
					Answer++;					
				}
				else 
				{
					//printf("친구의 친구는 없음\n");
					Answer++;
				}
			}
			else 
			{
				//printf("친구 없음\n");
				if (*(cnt + i) == 1)
				{
					//printf("팔로우 당한 경우\n");
					//비어있음
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