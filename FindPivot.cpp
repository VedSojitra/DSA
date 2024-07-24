#include<iostream>
using namespace std;

int fpivt(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s<e){
        if(arr[mid]<arr[mid-1]){
            return mid;
        }
        else if(arr[0] < arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;

    }
    
}

int main(){
    int arr[6] = {8,10,12,15,2,5};
    int ans = fpivt(arr,6);
    cout<<"Pivot element is at index: " << ans << endl;
}
