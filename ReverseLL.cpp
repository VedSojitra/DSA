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
    Node* temp = new Node(d); 
    temp -> next = head;
    head = temp;
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

Node* reverseLinkedList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}


int main(){
    Node* node1 = new Node(10);

    // head pointer point to first node
    Node* head = node1;

    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    InsertAtHead(head, 18);
    printList(head);


    Node* newHead = reverseLinkedList(head);
    printList(newHead);
    

    return 0;
}
