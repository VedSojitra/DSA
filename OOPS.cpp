#include<iostream>
using namespace std;

class Hero{
    // properties
    private:
    int health;

    public:
    char level;
    static int timeToComplete;  // Static object does not require object for it's access

    void print(){
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    int setHealth(int h){
        health = h;
    }

    char setLevel(char ch){
        level = ch;
    }






    Hero(){
        cout << "Constructor is called" << endl;
    }

    // Paramerterized constructor
    Hero(int health){
        this -> health = health;  // this keyword is a pointer to current object
    }
    
    Hero(int health, int level){
        this->health = health;
        this -> level = level;
    }

    //copy constructor
    Hero(Hero& temp) {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

};

int main(){
    // creating object
    Hero ramesh;
    cout << "Size of Ramesh is "<< sizeof(ramesh) << endl;
    cout << "Ramesh health is "<< ramesh.getHealth() << endl;

    // static allocation
    ramesh.setHealth(50);
    ramesh.setLevel('A');

    cout << "health is: " << ramesh.getHealth() << endl; 
    cout << "Level is: " << ramesh.level << endl;  // you don't have to use .getlevel() as level property is public.


    // dynamic allocation
    Hero *b = new Hero;
    (*b).setHealth(90);  // or b->setHealth(90);
    (*b).setLevel('B');  // or b->setLevel('B');

    cout << "level is " << (*b).level << endl;
    cout << "health is "<< (*b).getHealth() << endl;
    // or instead of dot(.) you can also write with arrow(->) symbol.
    cout << "level is " << b->level << endl;
    cout << "health is "<< b->getHealth() << endl;



    

    // when a object is created a default constructor is called
    cout << "hey" << endl;
    Hero obj;
    Hero *obj1 = new Hero;
    cout << "hey" << endl;

    // when you create a parameterized constructor, your default constructor which was created automatically will get deleted;
    Hero temp(10);
    temp.print();

    Hero temp1(22,'C');
    temp1.print();

    // copy constructor
    Hero temp2(temp1);
    temp2.print();
}
