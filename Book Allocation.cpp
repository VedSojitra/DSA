#include<iostream>
using namespace std;
/*

Problem Statement:- 

Given an array 'arr' of integer numbers . where 'arr[i]' represents the number of pages in the 'i-th'
book. There are 'm' number of students and the task is to allocate all the books to their
students. Allocate books in such a way that:

1. Each student gets at least one book.
2. Each book should be allocated to a student.
3. Book allocation should be in a contiguous manner.

You have to allocate the book to 'm' students such that the maximum number of pages
assigned to a student is minimum.

*/

bool ifpossible(int arr[], int n, int m, int mid){
    int studentcount = 1;
    int pagesum = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] + pagesum <= mid){
            pagesum += arr[i];
    }
    else{
        studentcount++;
        if(studentcount > m || arr[i]>mid){
            return false;
        }
        pagesum = arr[i];
    }
}
return true;
}

int main(){
    int arr[4] = {10,20,30,40};
    int n = 4;
    int m = 2;
    int ans = 0;

    int sum = 0;
    for(int i = 0; i<=n; i++){
        sum = sum + arr[i];
    }

    int s = 0;
    int e = sum;
    int mid = s + (e-s)/2;

    while(s<=e){

        if(ifpossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    cout << ans << " can be the maximum number of pages that is assigned to a student which is minimum" << endl;
}
