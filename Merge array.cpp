#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<int> arr2, int n){
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" "; 
    }
    cout<<endl;
}

void merge(vector<int> arr, vector<int> arr1, vector<int> arr2){
    
    int i = 0;
    int j = 0;

    while( i < arr.size() && j < arr1.size()){
        
            if(arr[i] < arr1[j]){
                arr2.push_back(arr[i]);
                i++;
            }
            else if(arr[i]>arr1[j]){
                arr2.push_back(arr1[j]);
                j++;  
            }
            else{
                arr2.push_back(arr[i]);
                arr2.push_back(arr1[j]);
                i++;
                j++;
            }
        }

        while( i < arr.size()){
            arr2.push_back(arr[i]);
            i++;
        }

        while( j < arr1.size()){
            arr2.push_back(arr1[j]);
            j++;
        }

        
        printarray(arr2,arr2.size());
    }



int main(){
    vector<int> arr = {1,3,5,7,9,11,89};
    vector<int> arr1 = {2,3,5,6,12,13,56,100};
    vector<int> arr2 = {};

    cout << "Array one:- " << endl;
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }cout << endl;

    cout << "Array two:- " << endl;
    for(int i = 0; i<arr1.size(); i++){
        cout << arr1[i] << " ";
    }cout << endl;

    cout << "Merged array:- " << endl;
    merge(arr,arr1,arr2);
}
