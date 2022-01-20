#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {	//���Ḯ��Ʈ�� ��� ����ü
	int data;		//�����͸� �����ϴ� ���
	struct Node* next;		//���� ����� �ּҸ� �����ϴ� ������
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