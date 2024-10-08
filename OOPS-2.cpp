#include<iostream>
using namespace std;

class Student{

    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};


// Single Inheritance
class Animal{
    public:
    int age;
    int weight;

    public:
    void speaking(){
        cout<<"Animal is speaking"<<endl;
    }
};

class Dog: public Animal{

};



// Multilevel Inheritance:- Animal -> Dog -> GermanShepherd
class GermanShepherd: public Dog{

};




// Multiple Inheritance
class Birds{
    public:
    void fly(){
        cout << "can fly" << endl;
    }
};

class Plants{
    public:
    void grow(){
        cout << "can grow" << endl;
    }
};

class Hybrid: public Birds, public Plants{

};


int main(){
    /*
    => Encapsulation (Information hiding / data hiding)
    -> It is a wrapping of data member and functions. Ex:- wrapping of capsule
    -> Fully Encapsulated class:- Which have all the data member private
    */
    Student first;
    cout << "First Student" << endl;



    /*
    => Inheritance
    -> Protected access modifier is similar to private with two condition:-
    1. It can be accessed by the class which is inheriting the class.
    2. It can be accessed in that class itself.
    */

    // Single Inheritance
    Dog d;
    d.speaking();
    cout << d.age << endl;


    // Multilevel Inheritance
    GermanShepherd gs;
    gs.speaking();
    cout << gs.weight << endl;


    // Multiple Inheritance
    Hybrid h;
    h.fly();
    h.grow();
}
