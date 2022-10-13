#include<iostream>
using namespace std;

//swap two numbers without using a third variable
// using bit manipulation

int main(){
    int x = 4;
    int y = 5;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout<<"x : "<<x;
    cout<<endl;
    cout<<"y : "<<y;
}