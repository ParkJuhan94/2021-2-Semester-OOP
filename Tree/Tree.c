#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct tNode 
{
    int Data;
    struct tNode* Left;
    struct tNode* Right;
}Node;

// ��� ����
Node* createNode(int data)
{  
    Node* newNode = (Node*)malloc(sizeof(Node));

    //variables initialization
    newNode->Data = data;
    newNode->Left = NULL;
    newNode->Right = NULL;

    return newNode;
}

// ������ȸ �Լ�
void PreOrder(Node* ptr) {

    if (ptr) // ptr�� NULL�� �ƴ� ����. Node�� ���� ����.
    {        
        printf("%c ", ptr->Data);
        PreOrder(ptr->Left);
        PreOrder(ptr->Right); 
    }
}

// ������ȸ �Լ�
void InOrder(Node* ptr) { 

    if (ptr) 
    {
        InOrder(ptr->Left);
        printf("%c ", ptr->Data);
        InOrder(ptr->Right); 
    }
}

// ������ȸ �Լ�
void PostOrder(Node* ptr) {

    if (ptr) 
    {
        PostOrder(ptr->Left);      
        PostOrder(ptr->Right);
        printf("%c ", ptr->Data);
    }
}

int main()
{
    Node* root = createNode('C');
    Node* N1 = createNode('L');
    Node* N2 = createNode('R');
       
    root->Left = N1; 
    root->Right = N2;

    /*
           C (= root)
          / \
         L   R
    */

    printf("������ȸ ���: ");
    PreOrder(root);
    printf("\n");

    printf("������ȸ ���: ");
    InOrder(root);
    printf("\n");

    printf("������ȸ ���: ");
    PostOrder(root);
    printf("\n");
}