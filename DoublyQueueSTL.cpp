#include<iostream>
#include<queue>
using namespace std;

int main(){

    // Doubly ended queue(using STL):- You can push and pop from both end.
    deque<int> d;

    d.push_front(1);
    d.push_back(2);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();


    if(d.empty()){
        cout << "Doubly ended queue is empty" << endl;
    }
    else{
        cout << "Doubly ended queue is not empty" << endl;
    }

}
