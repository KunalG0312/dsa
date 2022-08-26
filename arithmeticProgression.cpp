#include<iostream>
using namespace std;

int ap (int n){
    int result = (3*n)+7;
    return result;
}

int main(){
    int n;
    cout<<"Enter a value for n : ";
    cin>>n;
    cout<<"The n'th term for the AP 3x+7 : "<<ap(n);
    return 0;
}