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

int main(){
    int nstairs = 6;
    cout << CountStairs(nstairs) << endl;
}
