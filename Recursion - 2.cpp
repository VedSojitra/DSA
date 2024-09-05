#include<iostream>
using namespace std;

int CountStairs(int nstairs){
    if(nstairs < 0){
        return 0;
    }
    if(nstairs == 0){
        return 1;
    }

    int ans = CountStairs(nstairs-1) + CountStairs(nstairs-2);
    return ans;
}

void SayDigit(int n, string arr[]){
    // base case
    if(n == 0){
        return ;
    }

    //processes
    int digit = n % 10;
    n = n / 10;

    // recursive call
    SayDigit(n, arr);
    cout << arr[digit] << " ";
}

int main(){
    int nstairs = 6;
    cout << CountStairs(nstairs) << endl;

    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout << "Enter any digit between 0 to 9: ";
    int n;
    cin >> n;
    SayDigit(n,arr);
}
