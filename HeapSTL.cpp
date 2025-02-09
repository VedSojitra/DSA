#include<iostream>
#include<queue>
using namespace std;

int main(){
    cout << "Heap using Priority Queue" << endl;

    // max heap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(10);
    pq.push(3);
    pq.push(8);

    cout << "MAX HEAP:- " << endl;
    cout << "Element at top " << pq.top() << endl;
    pq.pop();
    cout << "Element at top " << pq.top() << endl;
    cout << "Size is " << pq.size() << endl;
    if(pq.empty())
        cout << "Maxheap is empty " << endl;
    else
        cout << "Maxheap is not empty " << endl;


    // min heap
    priority_queue<int, vector<int>, greater<int> > mh;

    mh.push(4);
    mh.push(10);
    mh.push(3);
    mh.push(8);

    cout << "MIN HEAP:- " << endl;
    cout << "Element at top " << mh.top() << endl;
    mh.pop();
    cout << "Element at top " << mh.top() << endl;
    cout << "Size is " << mh.size() << endl;
    if(mh.empty())
        cout << "Minheap is empty " << endl;
    else
        cout << "Minheap is not empty " << endl;

}
