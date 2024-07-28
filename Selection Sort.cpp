#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){

    for(int i =0 ; i < n-1 ; i++){

        int minvalue = i;

        for(int j = i +1; j < n; j++){

            if(arr[j] < arr[minvalue]){
                minvalue = j;
            }
        }
        swap(arr[i],arr[minvalue]);
    }

    printarray(arr,n);
}

int main(){
    int arr[5] = {5,8,3,1,2};
    int n = 5;

    cout << "Before sorting " << endl;
    printarray(arr,n);

    cout << "After sorting " << endl;
    selectionSort(arr,n);
}
