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


int main(){
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of "<< n << " is " << ans << endl;

    return 0;
}
