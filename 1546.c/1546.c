#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {	//연결리스트의 노드 구조체
	float data;		//데이터를 저장하는 멤버
	struct Node* next;		//다음 노드의 주소를 저장하는 포인터
}node;

int main() {
	int n, i;
	int max = 0;	
	float sum = 0;

	scanf("%d", &n);

	node* head = malloc(sizeof(node));
	node* nodes = malloc(sizeof(node) * n);

	head->next = nodes;

	for (i = 0; i < n; i++) {
		scanf("%f", &(nodes + i)->data);

		if ((nodes + i)->data > max) {
			max = (nodes + i)->data;
		}
	}

	for (i = 0; i < n; i++) {
		(nodes + i)->data = (nodes + i)->data * 100 / max;
	}

	
	for (i = 0; i < n; i++) {
		printf("%f ", (nodes + i)->data);
	}
	

	for (i = 0; i < n; i++) {
		sum += (nodes + i)->data;
	}
	printf("%f\n", (float)sum / n);
}