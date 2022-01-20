#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i;

struct person {
    char id[15];    // 주민 번호.
    char* name;     // 이름. 최대 200바이트로 하되 메모리 낭비를 없게 동적할당한다.
};


// 함수 getPerson, printAll, removeAll 함수를 작성하라.
struct person* getPerson() {
    char id[15];
    char name[201];
    struct person* ptr;

    if (scanf("%s %s", id, name) == 2) {
        ptr = (struct person*)malloc(sizeof(struct person));
        ptr->name = (char*)malloc(strlen(name));
        strcpy(ptr->id, id);
        strcpy(ptr->name, name);
        return ptr;
    }
    else {
        return 0;
    }
}

void printAll(struct person* ptr[], int cnt) {
    for (i = 0; i < cnt; i++) {
        printf("%s %s\n", ptr[i]->id, ptr[i]->name);
    }
}

void removeAll(struct person* ptr[], int cnt) {
    for (i = 0; i < cnt; i++) {
        free(ptr[i]);
    }
}

int main() {
    struct person* employee[100];
    int count;
    struct person* t;

    for (count = 0; t = getPerson(); count++) {
        employee[count] = t;
    }

    printAll(employee, count);  // 이 출력 함수는 만들어야 한다.
    removeAll(employee, count);  //  동적할당한 모든 메모리를 반환. 주의해야할 점이 있다.
    return 0;
}
