#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    int x = n;
    while(x!=0){
        int digit = x%10;
        ans = (ans*10)+digit;
        x = x/10;
    }
    if(n == ans){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    cout<< ans;
}