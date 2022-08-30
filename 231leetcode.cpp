//power of 2

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans;
    bool powerOf2 = 0;
    for(int i = 0; i<=30; i++){
        ans = i*i;
        if(ans == n){
            powerOf2 = 1;
        }
    }
    if(powerOf2 == 1){
        cout<<"Power of 2";
    }
    else{
        cout<<"Not a power of 2";
    }
}
