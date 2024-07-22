#include<iostream>
using namespace std;

bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}

int factorial(int n){
    int fact = 1;

    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    return numerator/denominator;
}

int main(){
    // int num;
    // cout << "Enter the number: " << endl;
    // cin >> num;

    // if(isEven(num)){
    //     cout << "The number is even " << endl;
    // }
    // else{
    //     cout << "The number is odd " << endl;
    // }

    int n , r;
    cout << "Enter the value of n and r respectively: " << endl;
    cin >> n >> r;
    cout << "Answer is: " << nCr(n,r) << endl;
}
