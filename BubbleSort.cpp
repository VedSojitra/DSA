#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){   
    for(int i = 1; i<n; i++) {
        bool swapped = false;
        
        for(int j =0; j<n-i; j++){
            
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main(){

    int arr[7] = {3,2,1,4,6,10,9};
    int n = 7;

    cout << "Before sorting " << endl;
    printarray(arr,n);

    cout << "After sorting " << endl;
    bubbleSort(arr,n);
    printarray(arr,n);
}
