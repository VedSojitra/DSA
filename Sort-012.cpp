#include<iostream>
using namespace std;
void printar(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}
void sortarr(int arr[], int n){
    int step = 1;
    int count = 0;
        printar(arr, n);
    for(int i = 0; i<n; i++){
        
        if(arr[i]!=0){

        for(int j = i+1; j<n; j++){
            if(arr[i]==0 && arr[j]== 0){
                break;
            }
            if(arr[j]==0){
                swap(arr[i],arr[j]);
                break;
            }
        step++;
            
        }
        }
    }
    
    for(int i = 0; i<n; i++){
      if(arr[i]== 0){
            count++;
        }
     }
    
    
    int i = count;
    int j = n-1;

    while(i<j){
        while(arr[i] == 1){
            i++;
        }
        while(arr[j] == 2){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
   }
}


int main(){
    int arr[8] = {0,1,2,2,1,0,1,0};
    int n = 8;
    cout << "Unsorted array:- " << endl;
    sortarr(arr,n);
    cout << "Sorted array:- " << endl;
    printar(arr,n);

}
