#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool linearsearch(int arr[] ,int size, int k){
    if(size == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingPart = linearsearch(arr+1 , size-1 , k);
        return remainingPart;
    }
}

bool binarySearch(int arr[], int s, int e, int k){

    cout << endl;
    print(arr,s,e);


    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    cout << "Value of mid is: " << arr[mid] << endl; 

    if(arr[mid] == k)
        return true;

    if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main(){
    int arr1[5] = {3,5,1,2,6};
    int size = 5;
    int key = 1;

    bool ans = linearsearch(arr1,size,key);
    if(ans){
        cout<<"Element is present in array"<<endl;
    }
    else{
        cout<<"Element is not present in array"<<endl;
    }


    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size1 = 11;
    int key1 = 55;
    cout << "Present or not:- " << binarySearch(arr, 0, size1-1, key1) << endl;
}
