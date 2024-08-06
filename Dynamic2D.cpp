#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the number of row:- " << endl;
    cin >> row;

    int col;
    cout << endl << "Enter the number of column:- " << endl;
    cin >> col;

    // Creating 2D array
    int** arr = new int*[row];
    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
    }

    // taking input
    cout << endl << "Enter " << row*col << " elements:- " << endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    // taking output
    cout << endl << "2D array:- " << endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
