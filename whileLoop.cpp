#include <iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int i = 1;
    
    // while(i<=n){
    //     cout<<i<<" ";
    //     i++;
    // }

    //if n = 5, print 1+2+3+4+5 i.e 15
    // int n ;
    // cin>> n;
    // int i = 1;
    // int sum = 0;

    // while(i<=n){
    //     sum = sum + i;
    //     i++;
    // }
    // cout<<sum;

    //take input n, print sum of all even numbers between 0 and n
    int n;
    cin>>n;
    int i = 1;
    int sum = 0;
    
    while(i<=n){
        if(i%2 == 0){
            sum = sum + i;
        }
        i++;
    }
    cout<<sum;

    
}