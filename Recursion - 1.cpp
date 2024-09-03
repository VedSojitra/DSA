#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n == 0)
        return 1;

    //recursive relation
    // 4! = 4 * 3!
    // f(n) = n * f(n-1)
    // biggerProblem = n * smallerProblem

    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;

    // return n * factorial(n-1);
    
}

int power(int n){

    //base case
    if(n == 0){
        return 1;
    }

    //recursive relation
    // 2^3 = 2 * 2^2
    // f(n) = 2 * f(n-1)
    // biggerProblem = 2 * smallerProblem

    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;

    // return 2 * power(n-1);

}

void print(int n){
    // base case
    if(n == 0){
        return ;
    }

    //recursive relation
    // 5 = 5-1
    // f(n) = f(n-1)

    cout << n << " ";

    print(n-1);
    cout << endl;
    cout << n << " ";

}

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of "<< n << " is " << ans << endl;

    int ans1 = power(n);

    cout << "Power of 2 raise to " << n << " is " << ans1 << endl;

    cout << "Printing backword :- ";
    print(n);

    return 0;
}
