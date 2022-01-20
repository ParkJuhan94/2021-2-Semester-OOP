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
        
        //노드가 없을 때
        if (Head->next == NULL) {
            Head->next = newNode;
            newNode->next = NULL;
        }
        else {      //노드가 하나라도 있을 때
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
        cout << "끝" << endl;
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
    //myList.init();  // 시작 포인터 초기화 생성자를 배웠으므로 생략
    while (cin >> num) {
        myList.insert(num);
    }
    myList.printall();  // 모든 항목을 입력된 순서대로 출력한다.

    //// 이제 하나씩 빼자.    
    while (!myList.isEmpty()) {
        num = myList.remove();
        cout << "빼낸 항목: " << num << endl;
        myList.printall();  // 남은 항목을 출력
    }
    return 0;
    
}
