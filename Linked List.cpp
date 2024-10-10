#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl; 
    }
};

void InsertAtHead(Node* &head, int d){
    // new node
    Node* temp = new Node(d);  // Node* is a datatype, which will create a node with two parth i.e data and next pointer.
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    // new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void InserAtPosition(Node* &head,Node* &tail,  int position, int d){
    // insert at first
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head; 
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    // insert at last
    if(temp -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }
    // creating node for data
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}


void printList(Node* &head){
    // create new pointer for traversing
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(){
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // head pointer point to first node
    Node* head = node1;

    // InsertAtHead(head, 12);
    // printList(head);

    // InsertAtHead(head, 15);
    // printList(head);

    // tail pointer point to first node
    Node* tail = node1;

    InsertAtTail(tail, 12);
    InsertAtTail(tail, 15);
    printList(head);


    InserAtPosition(head,tail,4,14);
    printList(head);

    cout << "head:- " << head -> data << endl;
    cout << "tail:- " << tail -> data << endl;


    return 0;
}
