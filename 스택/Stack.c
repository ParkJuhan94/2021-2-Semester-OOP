#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���Ḯ��Ʈ�� �̿��� ���� ����
typedef struct Node {

	char* data;
	struct Node* next;
}Node;

typedef struct listStack {

	Node* peek;
	int size;
}Stack;

void createStack() {

}