#include<iostream>
#include<vector>
using namespace std;
 
bool ifpossible(vector<int>arr, int mid, int cows,int lastpos, int count = 1,int i = 0){

    if(i >= arr.size()){
        return false;
    }
    if(arr[i]-lastpos >= mid){
        count++;
        if(count == cows){
            return true;
        }
        lastpos = arr[i];
    }
    return ifpossible(arr, mid, cows, lastpos, count, i+1);

    return false;
}


int main(){
    vector<int> arr = {1,2,3,4,6};
    int maxi = -1;
    for(int i = 0; i<arr.size(); i++){
        maxi = max(arr[i], maxi);
    }
    int ans = -1 ;
    int cows = 2;
    int s=0;
    int e=maxi;
    int mid = s + (e - s)/2;
    while(s<=e){

        if(ifpossible(arr, mid, cows, arr[0])){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    cout <<"The largest minimum distance is "<< ans << endl;
}
