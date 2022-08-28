#include<iostream>
using namespace std;

int main(){
    // if n = 4
    // D 
    // CD 
    // BCD 
    // ABCD
    // int n;
    // cin>>n;
    // int i = 1;

    // while(i<=n){
    //     int j = 1; 
    //     while(j<=i){
    //         char ch = 'A'+n-i+j-1;
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // return 0;

    // if n = 4
    //        *
    //       **
    //      ***
    //     ****
    // int n;
    // cin>>n;
    // int i = 1;
    
    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }

    //     int j = 1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // if n = 4
    // ****
    // ***
    // **
    // *
    // int n ;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n-i+1){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 4
    // ****
    //  ***
    //   **
    //    *
    // int n ;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int space = 0;
    //     while(space<=i){
    //         cout<<" ";
    //         space++;
    //     }

    //     int j = n;
    //     while(j>=i){
    //         cout<<"*";
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 4
    //     1
    //    22
    //   333
    //  4444
    // int n ;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 4
    // 1111
    //  222
    //   33
    //    4

    // int n;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int space = 0;
    //     while(space<=i){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = i;
    //     while(j<=n){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // cout<<endl;
    // i++;

    // if n = 4
    // 1234
    //  234
    //   34
    //    4
    // int n;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int space = 0;
    //     while(space<=i){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    //     int value = i;
    //     while(j<=n-i+1){
    //         cout<<value;
    //         value++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 4
    //      1
    //     23
    //    456
    //  78910

    // int n;
    // cin>>n;
    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int space = n-i+1;
    //     while(space){
    //         cout<<"\t ";
    //         space--;
    //     }

    //     int j = 1;
    //     while(j<=i){
    //         cout<<"\t"<<count;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 4
    //             1
    //            121
    //           12321
    //          1234321
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int a = i-1;
        while(a){
            cout<<a;
            a--;
        }
        cout<<endl;
        i++;
    }
}