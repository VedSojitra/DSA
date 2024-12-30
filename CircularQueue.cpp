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

    void enqueue(int value) {
        if (isFull()) {
            cout << "Circular Queue is full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;  // If queue is empty, set front to 0
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
        cout << value << " enqueued to the Circular Queue." << endl;
    }

   
    void dequeue() {
        if (isEmpty()) {
            cout << "Circular Queue is empty!" << endl;
            return;
        }
        cout << arr[front] << " dequeued from the Circular Queue." << endl;
        if (front == rear) {
            front = rear = -1;  // Reset the queue if last element is dequeued
        } else {
            front = (front + 1) % size;
        }
    }
}
