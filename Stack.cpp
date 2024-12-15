#include<iostream>
#include<stack>
using namespace std;
    
class Stack{
    // properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size){
        this -> size = size;
        arr = new int(size);
        top = -1;
    }


    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else
            cout<<"Stack overflow"<<endl;
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else
            cout <<"Stack underflow" << endl;
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
};

int main(){
   Stack st (5);

   st.push(10);
   st.push(20);
   st.push(30);

   cout << st.peek() << endl;

   st.pop();
   cout << st.peek() << endl;

   st.pop();
   cout << st.peek() << endl;

   st.pop();

 }
