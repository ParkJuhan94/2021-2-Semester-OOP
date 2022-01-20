#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char arr[101];	//단어
	int alpha[26];	//a - z 카운팅

	for (int i = 0; i < 26; i++) {
		alpha[i] = -1;
	}
	scanf("%s", arr);

	for (char j = 'a'; j <= 'z'; j++) {
		for ( int i = 0; arr[i] != '\0'; i++) {
			if (arr[i] == j) {
				if (alpha[j - 'a'] == -1) {
					alpha[j - 'a'] = i;
				}
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alpha[i]);
	}
}