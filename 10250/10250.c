#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int test, h, w, n;
	int room;		

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		room = 101;		//첫번째 손님의 방번호 
		scanf("%d %d %d", &h, &w, &n);

		if (n % h) 
		{
			for (int j = 0; j < (n / h); j++) {
				room++;		
			}
			for (int k = 1; k < (n % h); k++) {
				room += 100;
			}
		}
		else {
			for (int j = 1; j < (n / h); j++) {
				room++;
			}
			for (int k = 1; k < h; k++) {
				room += 100;
			}
		}

		printf("%d\n", room);
	}
}