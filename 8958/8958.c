#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int num;
	char ox[80];
	int sum, add;	//sum: 최종점수 add: 추가점수

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {	//테스트케이스 반복
		scanf("%s", ox);
		sum = 0; 
		add = 1;

		for (unsigned int i = 0; i < strlen(ox); i++) {	//strlen: 문자열의 길이
			if (ox[i] == 'O') {
				sum += add;
				add++;		//O가 연속되면 추가점수는 ++
			}
			else {
				add = 1;	// O의 연속이 끊겼을시 add를 1로 초기화
			}			
		}
		printf("%d\n", sum);
	}	
}