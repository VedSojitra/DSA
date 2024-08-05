#include<iostream>
using namespace std;


int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}

void update2(int& k){
    k++;
}

void update1(int k){
    k++;
}

/* 
int& fun(){}
int* fun1(){}
-> You can not make reference or pointer function like this, it will give a warning.
*/

int main(){
    /* */
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


    /*
    * DYNAMIC MEMORY ALLOCATION 
    -> int arr[n] :- bad practise

    -> Dynamic memory allocstion is done at run time from heap memory and static memory allocation at 
    compile time from stack memory.

    -> New keyword is used for dynamic allocation. With the help of new only required memory is assigned
    not the whole heap memory.

    Ex:- new int[50] // creating array.

    -> Name is not given for dynamic allocation instead we use pointer to store it as new keyword will
    store only address not the name. So:-
    int* arr = new int[50]
    int* arr  (memory in stack) = new int[50]  (memory in heap)

    -> This will take 208 byte as :- (new int[50] = 50*4 = 200) + (int* arr = 8) = 208 byte
    -> While for static memory allocation :- int arr[50] = 200 byte

    -> In static allocation memory is automatically released but for dynamic allocation you have to 
    release memory using delete keyword.
    
    -> Ex:- int* p = new int;
    Stake memory i.e. int* p will get release but dynamic memory i.e. new int will remain(size of new int)
    -> Ex of delete :- delete p or delete [] arr (from above example)
    */

    cout << "Enter the size of array:- " << endl;
    int n;
    cin >> n;
    
    //variable size array
    int* arr = new int[n];

    cout << "Enter elements of array:- " << endl;
    //takign inputn in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is "<< ans << endl;

    /*
    //case 1 :- Static allocation
    while(true) {
        int i = 5;
    }
    // -> After every loop memory will get released i.e. 4 byte of int i.
    
    //case 2 :- Dynamic allocation
    while(true) {
        int* ptr = new int;
    }
    // -> After every loop int* ptr(memory in stack) will get released but new int(memory in heap) will 
    remain and get stored till while loop ends.
    */
}
