/*
사각형을 나타내는 구조체를 정의한다. (가로와 세로 값만 있으면 된다.)
입력 데이터는 가로 세로 (정수)를 입력하도록 하고 입력 데이터가 더이상 없으면
면적 순으로 내림차순 정렬한다.

단, 구조체 포인터 배열을 이용하여 동적 할당을 한다.
정렬 역시 포인터만을 변경하여 정렬한다.
사각형은 최대 100개로 가정해도 된다.

출력은 가로 세로만 출력하면 된다. 
예:  1 1 2 2 3 3 4 4 가 입력되었다면
4 4
3 3
2 2
1 1
처럼 출력하면 된다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef 
struct square {
	//	구조체 수정해도 됨. 자유.
	int row;	//	가로
	int col;	//	세로	
	int area;	//	면적
}Square;

int main() {
	//	채워넣는다.
	int x, y;
	int i, j;
	int cnt = 0;	
	Square* pSquare[100];

	//	구조체에 데이터 저장
	while (scanf("%d %d", &x, &y) == 2) {
		pSquare[cnt] = (Square*)malloc(sizeof(Square));
		pSquare[cnt]->row = x;
		pSquare[cnt]->col = y;
		pSquare[cnt]->area = x * y;
		cnt++;
	}

	Square* pTemp = NULL;
	//	가로*세로 기준으로 구조체들은 내림차순 정렬
	//	4 2 1 3 -> 4 2 3 1 -> 4 3 2 1

	for (i = 0; i < cnt; i++) {
		for (j = 0; j < cnt - i - 1; j++) {
			if (pSquare[j]->area < pSquare[j + 1]->area ) {		//	포인터를 서로 바꿔준다.
				pTemp = pSquare[j];
				pSquare[j] = pSquare[j + 1];
				pSquare[j + 1] = pTemp;
			}
		}
	}

	//	정렬된 구조체들의 멤버 변수를 출력
	for (i = 0; i < cnt; i++) {
		printf("%d %d\n", pSquare[i]->row, pSquare[i]->col);
	}
}
