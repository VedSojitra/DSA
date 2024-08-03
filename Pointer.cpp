#include<iostream>
using namespace std;

int main(){
    // * is read as " value at ".
    int num = 5;
    int *ptr = &num;

    cout << "Address is "<< &num << endl;
    cout << "Value is "<< *ptr << endl;
    cout << "Address is "<< ptr << endl;
    cout << "Size is "<< sizeof(num) << endl;
    cout << "Size is "<< sizeof(ptr) << endl;

    double num2 = 10.5;
    double *ptr2 = &num2;

    cout << "Address is "<< &num2 << endl;
    cout << "Value is "<< *ptr2 << endl;
    cout << "Address is "<< ptr2 << endl;
    cout << "Size is "<< sizeof(num2) << endl;
    cout << "Size is "<< sizeof(ptr2) << endl;

    // Size of pointer will remain same no matter it is int,double,long,char etc.

    int num3 = 15;
    int *ptr3 = &num3;

    cout << "Address is "<< ptr3 << endl;
    ptr3 = ptr3 + 1;
    cout << ptr3 << endl;
    // ptr3 + 1 will not increase the value of num3. It will only increase the address
    // ptr3 + 1 i.e pointer will go to next int. Means 4 byte will increase in case of int. 8 byte in double and etc.


    int arr[10] = {23,144,41,67};

    // cout << "Address of first memory block " << arr << endl;
    // cout << "Address of first memory block " << &arr << endl;
    // cout << "Address of first memory block " << &arr[0] << endl;

    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << *(arr) + 1 << endl;

    // cout << sizeof(arr) << endl;
    // cout << sizeof(*arr) << endl;
    // cout << sizeof(&arr) << endl;

    // int *ptr = &arr[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(&ptr) << endl;

    // cout << &arr << endl;
    // cout << &ptr << endl;

    char ch[6] = "abcde";
    cout << ch << endl;
    char *c = &ch[0];
    cout << c << endl;

    char temp = 'z';
    char *t = &temp;
    cout << t << endl;

}
