#include<stdio.h>
#include<stdlib.h>

struct node {      //struct node�� ����
    int data;
    struct node* next;
};

void addnode(node* head, int a) {      //��� 1�� �߰�
    struct node* temp, * cursor;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = a; temp->next = NULL;
    for (cursor = head; cursor->next != NULL; cursor = cursor->next);
    cursor->next = temp;
}

void printAll(node* head) {      //��� �� ���
    struct node* cursor;
    int i = 1;

    for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
        printf("%d\n", cursor->data);
    }
    printf("%d\n", cursor->data);
}

int count(node* head) {      //��� ���� ����
    struct node* cursor;
    int i = 1;

    for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
        i++;
    }
    return i;
}

void found(node* head, int a) {      //��� �� ����Ʈ���� ���翩�� Ȯ��
    struct node* cursor;
    int i = 1;

    for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
        if (cursor->data == a) {
            printf("%d��° ����Ʈ�� %d ����\n", i, a);
        }
        i++;
    }
    if (cursor->data == a) {
        printf("%d��° ����Ʈ�� %d ����\n", i, a);
    }
}

void exchange_n(node* head, int n, int k) {      //n��° �����͸� 'k'�� �ٲٴ� �Լ� 
    struct node* cursor;
    int i = 2;

    if (n == 1) {
        head->data = k;
    }
    else {
        for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
            if (i == n) {
                cursor->next->data = k;
            }
            i++;
        }
    }
}

void Delete(node* head, int n) {      //n�� ���� ��� ����
    struct node* cursor;
    bool in = false;
    cursor = head;


    if (head->data == n) {
        head->data = cursor->next->data;
        head->next = cursor->next->next;
        in = true;
    }

    for (cursor = head; cursor->next->next != NULL; cursor = cursor->next) {
        if (cursor->next->data == n) {
            cursor->next = cursor->next->next;
            in = true;
        }
    }
    if (cursor->next->data == n) {
        cursor->next = NULL;
    }

    if (in == false) {
        printf("%d��(��) �����ϴ�.\n", n);
    }
}


void Delete_n(node* head, int n) { //n��° ��� ����
    struct node* cursor;
    int i = 2;
    cursor = head;


    if (n == 1) {
        head->data = cursor->next->data;
        head->next = cursor->next->next;
    }
    else {
        for (cursor = head; cursor->next->next != NULL; cursor = cursor->next) {
            if (i == n) {
                cursor->next = cursor->next->next;
            }
            i++;
        }
    }
    if (i == n) {
        cursor->next = NULL;
    }
}
void insert_n(node* head, int k, int n) { //n��° ��忡 k�� ����
    struct node* cursor, * temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = k;

    int i = 2;
    cursor = head;

    if (n >= count(head)) {
        for (cursor = head; cursor->next != NULL; cursor = cursor->next);
        cursor->next = temp;
        temp->next = NULL;
    }
    else if (n == 1) {
        temp->next = head->next;
        head->next = temp;
        temp->data = head->data;
        head->data = k;
    }
    else {
        for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
            if (i == n) {
                temp->next = cursor->next;
                cursor->next = temp;
                break;
            }
            i++;
        }
    }

}
int link_n(node* head, int n) { //n��° ����� �� ��ȯ

    struct node* cursor;
    int i = 2;
    cursor = head;

    if (n == 1) {
        return head->data;
    }
    else {
        for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
            if (i == n) {
                return cursor->next->data;
            }
            i++;
        }
    }
}

void swap(node* head, int k, int n) { //n��° ����  k��° ��� ��ȯ
    struct node* cursor;
    int a = link_n(head, k), b = link_n(head, n);
    int i = 2;
    cursor = head;


    if (n == 1) {
        head->data = a;
    }
    if (k == 1) {
        head->data = b;
    }
    for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
        if (i == n) {
            cursor->next->data = a;
        }
        if (i == k) {
            cursor->next->data = b;
        }
        i++;
    }
}
void ReversePrint(node* head) {
    if (head->next != NULL)
        ReversePrint(head->next);
    printf("%d\n", head->data);
}
void MinMax(node* head, int* min, int* max) {
    node* cursor;
    *max = head->data;
    *min = head->data;
    for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
        if (cursor->data > *max) {
            *max = cursor->data;
        }
        if (cursor->data < *min) {
            *min = cursor->data;
        }
    }
}

void noiseremove(node* head) {
    node* cursor;
    int i = 3;
    for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
        if (cursor->data = cursor->next->data) {
            if (i == count(head)) {
                cursor->next = NULL;
                break;
            }
            else
                cursor->next = cursor->next->next;
        }
        i++;
    }

}
int count_n(node* head, int n) {      //n ī��Ʈ
    node* cursor;
    int i = 0;
    for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
        if (cursor->data == n) {
            i++;
        }
    }
    return i;
}

void merge(node* head1, node* head2) {
    node* cursor1, * cursor2;
    cursor1 = head2;

    for (int i = 1; i < count(head2) + 1; i++) {
        if (cursor1->next != NULL) {
            insert_n(head1, cursor1->data, i * 2);
            cursor1 = cursor1->next;
        }
        else {
            insert_n(head1, cursor1->data, i * 2);
        }
    }
}





int main() {
    struct node* head1, * head2, * temp, * cursor;
    int min, max;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 3; temp->next = NULL;
    head1 = temp;

    addnode(head1, 5);
    addnode(head1, 10);
    addnode(head1, 21);

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 4; temp->next = NULL;
    head2 = temp;

    addnode(head2, 6);
    addnode(head2, 15);
    addnode(head2, 26);
    addnode(head2, 33);

    merge(head1, head2);
    printAll(head1);


    return 0;
}