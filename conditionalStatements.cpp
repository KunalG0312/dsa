#include <iostream>
using namespace std;

int main(){

    //a and b greater
    // int a,b;
    // cout<<"Enter the values of a and b : ";
    // cin>>a>>b;
    // if(a>b){
    //     cout<<"A is greater";
    // }      
    // else{
    //     cout<<"B is greater";
    // }

    //a greater or smaller than 0(negative , positive or zero)
    // int a;
    // cin>>a;

    // if(a>0){
    //     cout<<"A is positive";
    // }

    // else if(a<0){
    //     cout<<"A is negative";
    // }

    // else{
    //     cout<<"A is zero";
    // }

    //input char ch, if a-z print lowercase, A-Z print uppercase, 0-9 print numeric
    char ch;
    cin>>ch;
    int a = ch;
    
    if(a>=48 && a<=57){
        cout<<"Numeric";
    }

    else if(a>=65 && a<=90){
        cout<<"UPPERCASE";
    }
    
    else if(a>=97 && a<=122){
        cout<<"lowercase";
    }
}