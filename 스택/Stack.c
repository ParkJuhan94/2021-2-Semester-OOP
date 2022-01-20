#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//연결리스트를 이용한 스택 구현
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