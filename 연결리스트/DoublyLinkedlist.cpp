#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct listNode {	

	int Data;
	struct listNode* Next;
	struct listNode* Prev;
}Node;

Node* createNode(int data) {

	Node* newNode = (Node*)malloc(sizeof(Node));

	//variables initialization
	newNode->Data = data;
	newNode->Next = NULL;
	newNode->Prev = NULL;

	return newNode;
}

void deleteNode(Node* Node) {

	free(Node);
}

//�Է��� index�� ��� ��������
Node* getNodeAt(Node* head, int index) {

	Node* horse = head;	//��忡������ horse�� �޸�����
	int cnt = 0;

	while (horse != NULL) 
	{
		if (cnt++ == index) 
		{
			return horse;
		}

		horse = horse->Next;	//�޸���
	}
	return NULL;	//�� ã���� ��
}

int countNode(Node* head) {

	int cnt = 0;
	Node* horse = head;

	while (horse != NULL) 
	{
		horse = horse->Next;
		cnt++;		
	}

	return cnt;
}

//1.node�� ���� ���¿��� ����   2.node�� �̹� �ְ� ������ 
//head�� ubdate�ϱ� ���ؼ� ���������� Ȱ��
void addNode(Node** head, Node* newNode) {

	//no list exists
	if ((*head) == NULL)
	{
		*head = newNode;
	}

	//list exists
	else
	{
		Node* horse = (*head);

		while (horse->Next != NULL)
		{
			horse = horse->Next;
		}

		horse->Next = newNode;
		newNode->Prev = horse;
	}
}

//Current �ڿ� Node�� �����ֱ�
//Current�� ��ġ�� ���� �������� ������.
void insertAfter(Node* Current, Node* newNode) {
	//1. head
	if (Current->Prev == NULL && Current->Next == NULL) 
	{
		Current->Next = newNode;
		newNode->Prev = Current;
	}

	//not head
		//2. if tail
	if (Current->Next == NULL) 
	{
		Current->Next = newNode;
		newNode->Prev = Current;
	}
		//3. in the middle of 2 nodes
	else
	{
		Current->Next->Prev = newNode;
		newNode->Prev = Current;
		newNode->Next = Current->Next;
		Current->Next = newNode;		
	}
}

void removeNode(Node** head, Node* remove) {

	//head
	if (*head == remove) 
	{
		*head = remove->Next;
	}

	//when remove has next link to go
	if (remove->Next != NULL) 
	{
		remove->Next->Prev = remove->Prev;
	}

	//when remove has prev link to go
	if (remove->Prev != NULL) 
	{
		remove->Prev->Next = remove->Next;
	}
}   


////////////////////////////////////////////////////////////
int main() {
	int i		= 0;
	int cnt		= 0;

	//future head
	Node* List = NULL;

	//temporary Node
	Node* newNode = NULL;

	//current Node
	Node* Curr = NULL;

	for (i = 0; i < 7; i++) 
	{
		newNode = createNode(2 * i);
		addNode(&List, newNode);
	}

	cnt = countNode(List);
	for (i = 0; i < cnt; i++) 
	{
		Curr = getNodeAt(List, i);
		printf("List[%d] = %d\n", i, Curr->Data);
	}

	printf("--------- 7 Nodes Created ---------\n");

	newNode = createNode(300);
	Curr = getNodeAt(List, 0);
	insertAfter(Curr, newNode);

	newNode = createNode(500);
	Curr = getNodeAt(List, 3);
	insertAfter(Curr, newNode);

	cnt = countNode(List);
	
	for (i = 0; i < cnt; i++) 
	{
		Curr = getNodeAt(List, i);
		printf("List[%d] = %d\n", i, Curr->Data);
	}

	printf("--------- After 2 Nodes inserted ---------\n");

	newNode = getNodeAt(List, 1);
	removeNode(&List, newNode);

	newNode = getNodeAt(List, 0);
	removeNode(&List, newNode);

	cnt = countNode(List);
	for (i = 0; i < cnt; i++)
	{
		Curr = getNodeAt(List, i);
		printf("List[%d] = %d\n", i, Curr->Data);
	}

	printf("--------- After Node with index 1 removed ---------\n");
}