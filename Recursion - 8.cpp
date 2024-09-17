#include<iostream>
using namespace std;

int power(int a , int b){
    // base case
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    // recursive call
    int ans = power(a , b/2); // formula:- for even :- a ^ b/2 * a ^ b/2
                                        // for odd :- a * a^b/2 * a^b/2

    // if b is even
    if(b%2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}

void sortArray(int* arr, int n){
    // base case

    if(n == 0 || n == 1){
        return ;
    }

    // one case solved i.e largest element at end
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    sortArray(arr,n-1);
}

int main(){
    int a,b;
    cout << "Enter a number:- ";
    cin >> a;
    cout << "Enter it's power:- ";
    cin >> b;
    int ans = power(a,b);
    cout << a << " raise to " << b << " is " << ans << endl;



    int arr[5] = {2,1,6,4,9};
    sortArray(arr,5);
    cout << "Sorted Array:- " << endl;
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
}
