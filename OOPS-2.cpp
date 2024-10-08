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




// Hierarchical Inheritance
class A {

    public:
    void func1() {
        cout << "Inside Funcion 1" << endl;
    }

};

class B: public A {
    public:
    void func2() {
        cout << "Inside Funcion 2" << endl;
    }
};

class C: public A {
    public:
    void func3() {
        cout << "Inside Funcion 3" << endl;
    }
};




// Hybrid Inheritance
class D {

    public:
    void func1() {
        cout << "Inside Funcion D" << endl;
    }

};

class G{
    public:
    void func4() {
        cout << "Inside Funcion G" << endl;
    }
};

class E: public D {
    public:
    void func2() {
        cout << "Inside Funcion E" << endl;
    }
};

class F: public D, public G{
    public:
    void func3() {
        cout << "Inside Funcion F" << endl;
    }
};




// Ambiguity :- Confusion to inherit which function if both function have same name
class A1 {
    public:

    void func() {
        cout << "I am A1" << endl;
    }
};

class B1 {
    public:

    void func() {
        cout << "I am B1" << endl;
    }
};

class C1: public A1, public B1 {


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


    //Hierarchical Inheritance
    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();


    // Hybrid Inheritance
    D objD;
    objD.func1();

    E objE;
    objE.func1();
    objE.func2();

    F objF;
    objF.func1();
    objF.func3();
    objF.func4();

    G objG;
    objG.func4();

    
    // Ambiguity

    C1 obj;
    //obj.func();

    obj.A1::func() ;
    obj.B1::func();

    return 0;
}
