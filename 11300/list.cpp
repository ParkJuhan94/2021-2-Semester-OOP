#include <iostream>
using namespace std;

class LinkedList {
private:    
    class Node {
    public:
        int data;
        Node* next;
    };    

    Node* Head = new Node;    
    Node* newNode = new Node;    
public:                                          
    LinkedList() { 
        Head->next = NULL;                                
    }

    void insert(int num) {       
        Node* Cursor = Head;
        Node* newNode = new Node;        
        newNode->data = num;                       
        
        //��尡 ���� ��
        if (Head->next == NULL) {
            Head->next = newNode;
            newNode->next = NULL;
        }
        else {      //��尡 �ϳ��� ���� ��
            while (Cursor->next != NULL) {
                Cursor = Cursor->next;
            }

            Cursor->next = newNode;
            newNode->next = NULL;
        }        
    }

    void printall() {        
        Node* Cursor;
        Cursor = Head->next;

        while (Cursor != NULL) {
            cout << Cursor->data << "-->";
            Cursor = Cursor->next;
        }
        cout << "��" << endl;
    }

    int remove() {
        Node* temp = Head->next;
        if (Head->next != NULL) {
            int tempNum = temp->data;
            Head->next = Head->next->next;

            delete(temp);
            return tempNum;
        }
        else {
            return -1;
        }        
    }

    int isEmpty() {
        if (Head->next == NULL) {
            return 1;
        }
        else {
            return 0;
        }
    }    
};

int main() {
    LinkedList myList;  int num;
    //myList.init();  // ���� ������ �ʱ�ȭ �����ڸ� ������Ƿ� ����
    while (cin >> num) {
        myList.insert(num);
    }
    myList.printall();  // ��� �׸��� �Էµ� ������� ����Ѵ�.

    //// ���� �ϳ��� ����.    
    while (!myList.isEmpty()) {
        num = myList.remove();
        cout << "���� �׸�: " << num << endl;
        myList.printall();  // ���� �׸��� ���
    }
    return 0;
    
}
