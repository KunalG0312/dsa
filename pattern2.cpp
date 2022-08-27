#include<iostream>
using namespace std;

int main(){
    // if n = 4
    // *
    // **
    // ***
    // ****

    // int n ;
    // cin>>n;

    // int row = 1;

    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //         cout<<"*";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // if n = 4
    // 1
    // 12
    // 123
    // 1234

    // int n;
    // cin>>n;
    
    // int row = 1;
    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //         cout<<col;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;    
    // }

    // if n = 4
    // 1
    // 22
    // 333
    // 4444

    // int n;
    // cin>>n;
    // int row = 1;
    // while(row <= n){
    //     int col = 1;
    //     while(col<=row){
    //         cout<<row;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;

    // if n = 4
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int n;
    // cin>>n;
    // int row = 1;
    // int count = 1;
    // while(row<=n){
    //     int col = 1;
    //     while(col<=row){
    //         cout<<count<<" ";
    //         count++;
    //         col++;
    //     }
    // cout<<endl;
    // row++;
    // }

    // if n = 4
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1      row starts with number of the row(2nd row starts with 2, 3rd row starts with 3 and so on)

    // int n ;
    // cin>>n;
    // int row = 1;
    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //         cout<<row-col+1;
    //         cout<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // if n = 4
    // AAAA
    // BBBB
    // CCCC
    // DDDD

    // int n ;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         char ch = 'A'+i-1;
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 4
    // A B C D 
    // E F G H 
    // I J K L
    // M N O P

    // int n ;
    // cin>>n;
    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         char ch = 'A'+count-1;
    //         cout<<ch;
    //         cout<<" ";
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 3
    // 1 2 3
    // 2 3 4
    // 3 4 5
    // int n;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<i+j-1;
    //         cout<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n =3
    // A B C
    // B C D 
    // C D E

    // int n;
    // cin>>n;
    // int i =1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         char ch = 'A'+j+i-2;
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 3
    // A 
    // BB 
    // CCC 
    // int n;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         char ch = 'A'+i-1;
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n=4
    // A 
    // BC 
    // DEF 
    // GHIJ 
    // int n ;
    // cin>>n;
    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         char ch = 'A'+count-1;
    //         cout<<ch;
    //         cout<<'\t';
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 4
    // A 
    // BC 
    // CDE 
    // DEFG

    // int n;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         char ch = 'A'+i+j-2;
    //         cout<<ch<<'\t';
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 4
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
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

        int k = i-1;
        while(k){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
}