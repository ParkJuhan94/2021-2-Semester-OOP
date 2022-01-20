#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char arr[101];
	int state = 0;
	int cnt = 0;

	scanf("%s", arr);

	for (int i = 0; arr[i] != 0; i++) {
		if ((arr[i] == 'l' || arr[i] == 'n') && arr[i + 1] == 'j') {
			cnt--;
		}
		if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=') {
			cnt--;
		}
		if (arr[i] == '=' || arr[i] == '-') {
			cnt--;
		}
		cnt++;
	}
	printf("%d\n", cnt);
}