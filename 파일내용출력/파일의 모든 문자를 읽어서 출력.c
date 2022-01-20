#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int ac, char* av[]) {
	int c;
	FILE* fp;
	fp = fopen("av[1]", "r");
	if (fp != 0) {
		while ((c = fgetc(fp)) != EOF) {
			putchar(c);
		}
	}
	else {
		printf("파일을 열 수 없습니다\n");
	}


}