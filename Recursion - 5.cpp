#include<iostream>
using namespace std;

int FirstOccur(int arr[], int s, int e, int k, int ans){
    

    cout << endl;
    print(arr,s,e);


    if(s>e){
        return ans;
    }
    int mid = s + (e-s)/2;
    cout << "Value of mid is: " << arr[mid] << endl; 

    if(arr[mid] == k){
        ans = mid;
        e = mid - 1;
    }

    if(arr[mid] < k){
        return FirstOccur(arr, mid+1, e, k, ans);
    }
    else{
        return FirstOccur(arr, s, mid-1, k, ans);
    }
    return ans;
}


int LastOccur(int arr[], int s, int e, int k, int ans){
    

    cout << endl;
    print(arr,s,e);


    if(s>e){
        return ans;
    }
    int mid = s + (e-s)/2;
    cout << "Value of mid is: " << arr[mid] << endl; 

    if(arr[mid] == k){
        ans = mid;
        s = mid + 1;
    }

    if(arr[mid] <= k){
        return LastOccur(arr, mid+1, e, k, ans);
    }
    else{
        return LastOccur(arr, s, mid-1, k, ans);
    }
    return ans;
}

int main(){
int arr2[7] = {1,2,2,4,4,4,6};
    int size = 7;
    int key = 4;
    int ans = -1;
    cout << "First Occurence of " << key << " is at index: " << FirstOccur(arr2,0,size-1,key,ans) << endl;
    cout << "Last Occurence of " << key << " is at index: " << LastOccur(arr2,0,size-1,key,ans) << endl;
}
