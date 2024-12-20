#include<iostream>
#include<queue>
using namespace std;

int main(){
    // create a queue using STL
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    cout << "front of q is " << q.front() << endl;

    cout << "size of queue is " << q.size() << endl;

    q.pop();
    q.pop();

    cout << "size of queue is " << q.size() << endl;

    if(q.empty()){
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty" << endl;
    }    
}
