#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            this -> next = NULL;
            delete next;
        }
        cout << "memory is free for node with data " << value << endl; 
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void inseartAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at start
    if(position == 1){
        insertAtHead(head,d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    // insert at last
    if(temp -> next == NULL){
        inseartAtTail(tail,d);
        return ;
    }

    // create a node
    Node* nodeToInsert = new Node(d);
    
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* &head){
    // deleting first node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        // deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        // curr -> next -> prev = curr -> prev;
        curr -> next = NULL; 
        

        delete curr;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    print(head);

    insertAtHead(head,9);
    insertAtHead(head,8);
    print(head);

    inseartAtTail(tail,11); 
    inseartAtTail(tail,12);
    print(head);

    insertAtPosition(tail, head, 3, 101);
    insertAtPosition(tail, head, 1, 7);
    insertAtPosition(tail, head, 8, 13);
    print(head);

    deleteNode(5,head);
    print(head);

    return 0;
}
