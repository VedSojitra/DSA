#include<iostream>
using namespace std;


class CircularQueue{
    public:
        int front;
        int rear;
        int size;
        int* arr;

    CircularQueue(int size){
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
        if((rear + 1) % size == front) return true;
        else return false;
    }
}
