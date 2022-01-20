#pragma once
typedef struct listNode {

	int Data;
	struct listNode* Next;
	struct listNode* Prev;
}Node;

Node* createNode(int data);

void deleteNode(Node* Node);

Node* getNodeAt(Node* head, int index);

int countNode(Node* head);

void addNode(Node** head, Node* newNode);

void insertAfter(Node* Current, Node* newNode);

void removeNode(Node** head, Node* remove);

