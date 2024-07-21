#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;


    // 1)
    // -> Desired output
    // 54321
    // 54321
    // 54321
    // 54321
    // 54321
    
    // for(int i = 1; i<=n; i++){
    //     for(int j = n; j>0; j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }



    // 2)
    // -> Desired output
    // A 
    // B C 
    // C D E 
    // D E F G 
    // E F G H I 

    // for(int i = 1; i<=n; i++){
    //     char a = 'A' + i - 1 ;
    //     for(int j = 1;j<=i; j++){
    //         cout<<a<<" ";
    //         a++;
            
    //     }
    //     cout<<"\n";
    // }


 
    // 3)
    // -> Desired output
    // A B C D E 
    // A B C D E 
    // A B C D E 
    // A B C D E 
    // A B C D E 

    // for(int i = 1; i<=n; i++){
    //     int a = 'A';

    //     for(int j = 1;j<=n; j++){
    //         char ch = a;
    //         cout<<ch<<" ";
    //         a++;
            
    //     }
    //     cout<<"\n";
    // }

    

    // 4)
    // -> Desired output
    // A B C D E 
    // B C D E F 
    // C D E F G 
    // D E F G H 
    // E F G H I 
    // for(int i = 1; i<=n; i++){

    //     for(int j = 1;j<=n; j++){
    //         char ch = 'A' + i + j - 2;
    //         cout<<ch<<" ";  

    //     }
    //     cout<<"\n";
    // }



    // 5)
    // -> Desired output
    // E 
    // D E 
    // C D E 
    // B C D E 
    // A B C D E 

    // for(int i = 1; i<=n; i++){
    //     char a = 'A' + n - i  ;
    //     for(int j = 1;j<=i; j++){
    //         cout<<a<<" ";
    //         a++;
            
    //     }
    //     cout<<"\n";
    // }



    // 6)
    // -> Desired output
    //     *
    //    **
    //   ***
    //  ****
    // *****

    // for(int i = 1; i<=n ; i++){
    //     for(int j = 1; j<=n-i; j++){
    //         cout<<" ";
    //     }

    //     for(int j = 1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    // 7)
    // -> Desired output
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    
    //     int count = 1;
    //     for(int j = 1; j<=i; j++){
    //         cout<<count;
    //         count++;
    //     }
    //     int a = i-1;
    //     for(int j = 1; j<=i-1; j++){
    //         cout<<a;
    //         a--;
    //     }
    //     cout<<endl;
    // }



    // 8)
    // -> Desired output
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    // for(int i =1; i<=n; i++){
    //     for(int j=1; j<=n-i+1; j++){
    //         cout<<j;
    //     }

    //     for(int j = 1; j<=(i-1)*2; j++){
    //         cout<<"*";
    //     }
    //     int k = n-i+1;
    //     for(int j = 1; j<=n-i+1; j++){
    //         cout<<k;
    //         k--;

    //     }
    //     cout<<endl;
    // }

}
