#include<iostream>
using namespace std;

int main(){
    cout << "Enter the amount: " << endl;
    int n;
    cin >> n;
    int notes = 0;
    int amount = 0;
    cout << "Type 100 to know the number of each required notes: ";
    cin >> amount;
    switch(amount){

        case 100:{
            notes = n/100;
            n = n%100;
            cout << "100 notes: " << notes << endl;
        }

        case 50:{
            notes = n/50;
            n = n%50;
            cout << "50 notes: " << notes << endl;

        }

        case 20:{
            notes = n/20;
            n = n%20;
            cout << "20 notes: " << notes << endl;
        }

        case 1:{
            notes = n/1;
            n = n%1;
            cout << "1 notes: " << notes << endl;
        }

    }

}
