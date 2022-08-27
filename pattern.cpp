#include <iostream>
using namespace std;

int main(){
    //if n = 4
    // ****
    // ****
    // ****
    // ****

    // int n;
    // cin>>n;
    // int i = 1;

    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //if n = 4
    //1111
    //2222
    //3333
    //4444
    // int n;
    // cin>>n;
    // int i = 1;

    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //if n = 4
    //1 2 3 4
    //1 2 3 4
    //1 2 3 4
    //1 2 3 4

    // int n;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j <= n){
    //         cout<<j<< " ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // } 

    // if n =3
    // 3 2 1
    // 3 2 1
    // 3 2 1
    // int n;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<n-j+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // if n = 3
    // 1 2 3 
    // 4 5 6 
    // 7 8 9
    int n;
    cin>>n;
    int i = 1;
    int count = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<<count<<"\t";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

}