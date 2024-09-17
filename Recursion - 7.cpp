#include<iostream>
using namespace std;

void reverse(string& name, int i , int j){
    // base case
    if(i>j){
        return ;
    }

    swap(name[i],name[j]);
    i++;
    j--;
    reverse(name,i,j);
}

bool checkPalindrome(string str , int i, int j){
    // base case
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        // recursive call
        return checkPalindrome(str, i+1, j-1);
    }
}

int main(){
    string name = "ved";
    reverse(name , 0 , name.length()-1);
    cout << name << endl;

    string name1 = "NooN";
    bool isPalindrome = checkPalindrome(name1 , 0 , name1.length()-1);
    if(isPalindrome){
        cout << "It is a palindrome" << endl;
    }
    else{
        cout << "It is not a palindrome" << endl;
    }
}
