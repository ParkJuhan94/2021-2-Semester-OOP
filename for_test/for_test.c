#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* words[100];
	int n = 0;
	char buffer[100];

	while (n<4 && scanf("%s", buffer) != EOF) {
		words[n] = _strdup(buffer);
		n++;
	}

	for (int i = 0; i < 4; i++) {
		printf("%s\n", words[i]);
	}
}