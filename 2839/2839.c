#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int sugar, cnt = 0;

	scanf("%d", &sugar);

	while (1)
	{
		if (sugar % 5 == 0)
		{
			cnt += sugar / 5;
			printf("%d\n", cnt);
			break;
		}

		sugar -= 3;
		cnt++;

		if (sugar <= -1)
		{
			printf("-1\n");
			break;
		}
	}
	
}