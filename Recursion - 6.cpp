#include<iostream>
using namespace std;

int findpivot(int arr[],int s, int e){
    if(s>=e){
        return s;
    }
    int mid = s + (e-s)/2;
    
    if(arr[mid]>=arr[0]){
        return findpivot(arr,mid+1,e);
    }
    else{
        return findpivot(arr,s,mid);
    }

    return s;
}

int main(){
    int arr[7] = {5,10,15,20,4,3,2};
    int size = 7;
    int pivot = findpivot(arr,0,size-1);
    cout << "Pivot element is at index: " << pivot << endl;
}
