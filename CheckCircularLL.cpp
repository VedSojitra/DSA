#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl; 
    }
};

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        // for non empty list

        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }

        // element is found, now curr is representing the node having element
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    // for empty list
    if(tail == NULL){
        cout << "list is empty" << endl;
        return ;
    }
    
    do{
        cout << temp -> data << " ";
        temp = temp -> next;
    }while(tail != temp);
    cout << endl;
}

bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }

    return false;
}

int main(){
    Node* tail = NULL;
    
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    insertNode(tail, 5, 6);
    insertNode(tail, 3, 4);
    print(tail);

    if(isCircular(tail)){
        cout << "Linked list is circular" << endl;
    }
    else{
        cout << "Linked list is not circular" << endl;
    }


    return 0;
}
