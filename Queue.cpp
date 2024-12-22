#include<iostream>
using namespace std;


class Queue{
    public:
        int front;
        int rear;
        int size;
        int* arr;

    Queue(int size){
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty(){
        if(front == -1) return true;
        else return false;
    }

    bool isFull(){
        if(rear == size - 1) return true;
        else return false;
    }
};

int main() {
  Queue q (5);
  if(q.isEmpty())
    cout << "Queue is Empty" << endl;

  return 0;
}
