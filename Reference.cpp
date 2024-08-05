#include<iostream>
using namespace std;

void update2(int& k){
    k++;
}

void update1(int k){
    k++;
}

int main(){
    /**/
    // REFERENCE VARIABLE    
    int i = 5;
    int &j = i; // Reference variable i.e another name of i having same memory address.
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    i++;
    cout << "i = " << i << endl;
    j++;
    cout << "j = " << j << endl;
    /**/

    int k = 7;
    cout << "before " << k << endl;
    update1(k);
    cout << "after " << k << endl;
    update2(k);
    cout << "after reference value passed " << k << endl;
}
