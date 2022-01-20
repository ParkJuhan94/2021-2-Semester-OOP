#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VSIZE 20  // ���Ʒ��� 20��
#define HSIZE 10  // ������ 10ĭ
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
    int isFull[VSIZE] = { 0 };  //�ش� ���� �� á���� 1, �ƴϸ� �״�� 0

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
    cnt = 0;    //isFull �˻� �� ���ߵ��� �ÿ� 1����. ��ƴ�� �ε����� ������Ű�� ����. ��Ʈ������ �����ɾ�����, ���������ź��� ��ƴ�ܾ���.
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
    // ���⼭ ������ �Է�. char�� �Է��� %hhd �� �Ѵ�.
    for (row = 0; row < VSIZE; row++) {
        for (col = 0; col < HSIZE; col++) {
            scanf("%hhd", &tet[row][col]);
        }
    }

    // ����غ���.
    show(tet);
    printf("----------------------------\n");
    collapse(tet);
    show(tet);
    return 0;
}
