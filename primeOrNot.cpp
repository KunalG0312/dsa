#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isPrime = false;

    int i = 2;

    while(i<n){
        if(n % i == 0){
            isPrime = false;
        }
        else{
            isPrime = true;
        }
        i++;
    }
    if(isPrime == true){
        cout<<"Prime";
    }
    else if(isPrime == false){
        cout<<"Not Prime";
    }
}