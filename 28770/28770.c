#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i;

struct person {
    char id[15];    // �ֹ� ��ȣ.
    char* name;     // �̸�. �ִ� 200����Ʈ�� �ϵ� �޸� ���� ���� �����Ҵ��Ѵ�.
};


// �Լ� getPerson, printAll, removeAll �Լ��� �ۼ��϶�.
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

    printAll(employee, count);  // �� ��� �Լ��� ������ �Ѵ�.
    removeAll(employee, count);  //  �����Ҵ��� ��� �޸𸮸� ��ȯ. �����ؾ��� ���� �ִ�.
    return 0;
}
