#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

void insertionsort(int arr[], int n){

    for(int i = 1; i<n ; i++){

        int temp = arr[i];

        int j = i - 1;
        while(j>=0){
            if(arr[j] > temp){

                arr[j+1] = arr[j];
            }

            else{
                break;
            }
            j--;

            arr[j+1] = temp;

        }
    }
    printarray(arr,n);
}

int main(){

    int arr[7] = {3,2,1,4,6,8,9};
    int n = 7;

    cout << "Before sorting " << endl;
    printarray(arr,n);

    cout << "After sorting " << endl;
    insertionsort(arr,n);
}
