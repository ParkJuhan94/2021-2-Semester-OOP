/*
1. 토네이도는 두 번 이동할 때 이동거리가 1증가하고, 
             한 번 이동할 때 반시계 방향으로 90도 회전합니다.

2. 토네이도가 이동할 때 분배되는 모래 비율을 5 * 5 이차원 배열에 저장하고, 
   이동마다 반시계 방향으로 90도 회전시킵니다. (sandPercentage 배열, rotateSandPercentage 함수)

3. 토네이도의 이동마다 moveSand 함수를 호출하고 
   해당 좌표에 모래가 있을 때 하위 알고리즘을 진행해줍니다.

3-1. 모래를 분배할때 소수점 아래는 버리므로 !!!!
     알파 위치에 쌓이는 모래 양은 별도의 메서드(getLeftSand)를 통해 구해줘야합니다.

3-2. 격자 밖을 벗어나는 모래는 result에 더해주고, 
     격자 안에 모래가 쌓일 경우는 해당 좌표에 더해줍니다.

4. 토네이도가 (0, 0)에 위치할 때까지 3번 알고리즘을 반복해주고 result를 출력해주면 끝
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i, j;

typedef struct {
	int x, y;
} Pos;

Pos movePos[4] = {
	{0, -1},
	{1, 0},
	{0, 1},
	{-1, 0}
};

double sandPercentage[5][5] = {
	{0, 0, 0.02, 0, 0},
	{0, 0.1, 0.07, 0.01, 0},
	{0.05, 0.45, 0, 0, 0},
	{0, 0.1, 0.07, 0.01, 0},
	{0, 0, 0.02, 0, 0}
};

void moveSand() {

}

int main() {
	int N;
	int map[10][10] = {0};

	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &map[i][j]);
		}
	}



}

