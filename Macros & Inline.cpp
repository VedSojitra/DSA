#include<iostream> 
using namespace std;

#define PI 3.14 
// Macro:- A piece of code in a program that is replaced by value of macro.

inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
    // Inline function are used to reduce the function calls overhead.
    // It is mostly used for function call having 1 line code in it.
}

int main() {

    int r = 5;
    //double pi = 3.14;

    double area = PI * r * r;

    cout << "Area is " << area << endl;

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;

    return 0;
}
