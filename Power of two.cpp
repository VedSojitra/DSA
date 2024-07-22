#include <iostream>
using namespace std;

int main(){

cout << "Enter a number which you think is a power of two: " << endl;
int n;
cin >> n;
int bit = 0;

if(n<1){
    cout << "Loop will go in infinite" << endl;
}

while(n != 0){
    bit = bit + (n & 1);
    n = n >> 1;
}

//cout << bit << endl;
if(bit == 1){
    cout << "It is a power of two" << endl;
}
else{
    cout << "It is not a power of two " << endl;
}
}

