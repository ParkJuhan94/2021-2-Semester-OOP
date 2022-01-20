#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VSIZE 20  // 위아래로 20줄
#define HSIZE 10  // 옆으로 10칸
void show(char t[VSIZE][HSIZE]) {
    int row, col;
    for (row = 0; row < VSIZE; row++) {
        for (col = 0; col < HSIZE; col++) {
            printf("%hhd ", t[row][col]);
        }
        printf("\n");
    }
}

void collapse(char t[VSIZE][HSIZE]) {
    int i, j, k, cnt;
    int isFull[VSIZE] = { 0 };  //해당 행이 꽉 찼으면 1, 아니면 그대로 0

    for (i = 0; i < VSIZE; i++) {
        cnt = 0;
        for (j = 0; j < HSIZE; j++) {
            if (t[i][j] != 0) {
                cnt++;
            }
        }
        if (cnt == HSIZE) {
            isFull[i]++;
        }
    }
    /*
    printf("isFull ->");
    for (i = 0; i < VSIZE; i++) {
        printf("%d ", isFull[i]);
    }
    */
    cnt = 0;    //isFull 검사 후 적발됐을 시에 1증가. 잡아당길 인덱스를 증가시키는 변수. 테트리스가 내려앉았으니, 내려앉은거부터 잡아당겨야함.
    for (i = VSIZE - 1; i >= 0; i--) {
        if (isFull[i] == 1) {
            for (k = i + cnt; k >= 1; k--) {
                for (j = 0; j < HSIZE; j++) {
                    t[k][j] = t[k - 1][j];
                }                
            }
            for (j = 0; j < HSIZE; j++) {
                t[0][j] = 0;
            }
            cnt++;
        }
    }

}

int main() {
    char tet[VSIZE][HSIZE];
    int col, row;
    // 여기서 데이터 입력. char의 입력은 %hhd 로 한다.
    for (row = 0; row < VSIZE; row++) {
        for (col = 0; col < HSIZE; col++) {
            scanf("%hhd", &tet[row][col]);
        }
    }

    // 출력해본다.
    show(tet);
    printf("----------------------------\n");
    collapse(tet);
    show(tet);
    return 0;
}
