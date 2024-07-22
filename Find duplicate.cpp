#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int duplicate(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                ans = arr[i];
            }
        }
    }
    return ans;
}


int main(){

    int arr[5] = {10,85,65,10,69,};
    printarray(arr, 5);
    int num1 = duplicate(arr, 5);
    cout << num1 << endl;
    
}

