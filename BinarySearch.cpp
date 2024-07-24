#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int arr[5] = {0,2,5,6,9};
    int n = 5;
    int target = 2;

    int ans = binarysearch(arr,n,target);
    cout << "The index at which the target is present is: " << ans << endl;

}
