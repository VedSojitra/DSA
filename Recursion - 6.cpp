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

long long int sqrtInteger(int n, int s, int e, int ans){
    if(s>e){
        return ans;
    }
    int mid = s + (e-s)/2;
    long long int square = mid*mid;

    if(square == n){
        return mid;
    }
    if(square < n){
        ans = mid;
        return sqrtInteger(n,mid+1,e,ans);
    }
    else{
        return sqrtInteger(n,s,mid-1,ans);
    }

    return ans;
}

int main(){
    int arr[7] = {5,10,15,20,4,3,2};
    int size = 7;
    int pivot = findpivot(arr,0,size-1);
    cout << "Pivot element is at index: " << pivot << endl;


    cout << "Enter the number " << endl;
    int answer = -1;
    int num;
    cin >> num;
    int result = sqrtInteger(num,0,num,answer);
    cout << "Nearest square root of the given number is:- " << result << endl;
}
