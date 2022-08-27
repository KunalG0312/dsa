#include<iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    for(int i = 1; i<=n; i++){
        result = result * i;
    }
    return result;
}

int nCr(int n, int r){
    int result = factorial(n)/(factorial(r) * factorial(n-r));
    return result;
}

int main(){
    int n,r;
    cout<<"Enter the value of n : \n";
    cin>>n;
    cout<<"Enter the value of r : \n";
    cin>>r;
    int result = nCr(n,r);
    cout<<n<<"C"<<r<<" = "<<result;
}