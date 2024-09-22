#include <iostream>
using namespace std;

// Quick Sort

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;

    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // sort left and right part of pivot element
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] >= pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i] , arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    // base case
    if(s >= e){
        return;
    }
    int p = partition(arr, s, e);

    // left part sort
    quickSort(arr, s , p-1);

    // right part sort
    quickSort(arr, p+1, e);
}

int main(){
    int arr[5] = {2,4,0,6,9};
    int n = 5;
    cout << "Unsorted Array:- " << endl;
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }

    quickSort(arr,0,n-1);

    cout << endl << "Sorted Array:- " << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
