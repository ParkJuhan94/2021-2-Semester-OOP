#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu {
    int id;
    char* name;
    float gpa;   // ���� ���
};

struct stu* getStudent() {
    // ǥ�� �Է¿��� �� �л��� ID, �̸�, ��������� �Է��ؼ�
    // �����ϸ� �޸𸮸� �Ҵ��ϰ� ������ �� �����͸� �����ش�.
    // �̸��� �ִ� ���ڼ��� 255 (���� ����)���� �Ѵ�.
    struct stu* ptrStu = 0;
    int id;
    char name[256];
    float gpa;

    if (scanf("%d %s %f", &id, name, &gpa) == 3) {
        name[strlen(name)] = 0;
        ptrStu = (struct stu*)malloc(sizeof(struct stu));
        ptrStu->name = (char *)malloc(sizeof(char) * 256);
        ptrStu->id = id;
        strcpy(ptrStu->name, name);
        ptrStu->gpa = gpa;
    }    
    return ptrStu;
}

void printStudent(struct stu* ptrStu) {
    printf("%d %s %f", ptrStu->id, ptrStu->name, ptrStu->gpa);
}

int main() {
    struct stu* kim = 0;  // �����ʹ� 0���� �ʱ�ȭ�Ѵ�.

    kim = getStudent();
    if (kim) {
        printStudent(kim);
    }
}
