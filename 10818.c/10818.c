#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {	//연결리스트의 노드 구조체
	int data;		//데이터를 저장하는 멤버
	struct Node* next;		//다음 노드의 주소를 저장하는 포인터
}node;

int main() {
	int n;
	int min = 1000000;
	int max = -1000000;
	int i;

	scanf("%d", &n);

	node* head = malloc(sizeof(node));
	node* nodes = malloc(sizeof(node) * n);

	head->next = nodes;	

	for (i = 0; i < n; i++) {	
		scanf("%d", &(nodes + i)->data);

		if ((nodes + i)->data < min) {
			min = (nodes + i)->data;
		}

		if ((nodes + i)->data > max) {
			max = (nodes + i)->data;
		}
	}

	printf("%d %d", min, max);
}