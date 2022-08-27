#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

unsigned int noOfOnes(int n){
    unsigned int count = 0;
    while(n){
        count += n&1;
        n = n>>1;
    }
    return count;
}

int main(){
    int a,b;
    cout<<"Enter forst number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<noOfOnes(a)+noOfOnes(b);
}