#include<iostream>
using namespace std;

/*
=> Polymorphism:- Many forms
=> Two type:-

1. Compile time polymorphism:- 
- Function overloading
- Operator overloading

2. Runtime polymorphism(Dynamic Polymorphism):-
- Function overriding:- Performed only by inheritance
                     :- Methof of parent class and child class must have same name and same parameters



=> Abstraction:- Implementation hiding
-> Abstraction in classes can be achieved by using access modifiers
*/


// Compile time(Overloading):-
class A {

    public:
    void sayHello() {
        cout << "Hello" << endl;
    }
    
    void sayHello(char name) {
        cout << "Hello hey" << endl;
    }

    int sayHello(string name) {
        cout << "Hey " << name  << endl;
        return 1;
    }

};

class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
        /*int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 
        */
       cout << "Hello instead of + operator" << endl;
    }

    void operator() () {
        cout << "Inside Bracket" << this->a << endl;
    }

};



// Run time(Overriding):-
class Animal {
    public:
    void speak() {
        cout << "Speaking "<< endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << "Barking " << endl;
    }

};



int main(){
    // Overloading
    A obj;
    obj.sayHello();



    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();


  
    // Overriding
    Dog obj3;
    obj3.speak();

}
