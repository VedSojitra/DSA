#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void printList(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp-> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}


bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }    
    map < Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){

        // cycle is present
        if(visited[temp] == true){
            cout << "Present on element " << temp -> data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

Node* floydDetectloop(Node* head){
    if(head == NULL)
    return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}


Node* StartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectloop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}


Node* removeLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* startofLoop = StartingNode(head);
    Node* temp = startofLoop;

    while(temp -> next != startofLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;

}

int main(){
    Node * node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,11);
    insertAtTail(tail,12);
    insertAtTail(tail,13);
    printList(head);

    tail -> next = head -> next;

    cout << "head :- " << head -> data << endl;
    cout << "tail :- " << tail -> data << endl;

    if(detectLoop(head))
        cout << "Cycle is present" << endl;
    else
        cout << "Cycle is not present" << endl;


    if(floydDetectloop(head) != NULL)
        cout << "Cycle is present" << endl;
    else
        cout << "Cycle is not present" << endl;

    Node* starting = StartingNode(head);
    cout << "Loop start at " << starting -> data << endl;

    removeLoop(head);
    printList(head);
    
}
