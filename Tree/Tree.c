#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct tNode 
{
    int Data;
    struct tNode* Left;
    struct tNode* Right;
}Node;

// 노드 생성
Node* createNode(int data)
{  
    Node* newNode = (Node*)malloc(sizeof(Node));

    //variables initialization
    newNode->Data = data;
    newNode->Left = NULL;
    newNode->Right = NULL;

    return newNode;
}

// 전위순회 함수
void PreOrder(Node* ptr) {

    if (ptr) // ptr이 NULL이 아닐 때만. Node가 있을 때만.
    {        
        printf("%c ", ptr->Data);
        PreOrder(ptr->Left);
        PreOrder(ptr->Right); 
    }
}

// 중위순회 함수
void InOrder(Node* ptr) { 

    if (ptr) 
    {
        InOrder(ptr->Left);
        printf("%c ", ptr->Data);
        InOrder(ptr->Right); 
    }
}

// 후위순회 함수
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

    printf("전위순회 결과: ");
    PreOrder(root);
    printf("\n");

    printf("중위순회 결과: ");
    InOrder(root);
    printf("\n");

    printf("후위순회 결과: ");
    PostOrder(root);
    printf("\n");
}