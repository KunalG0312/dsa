#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter amount of money : ";
    cin>>n;
    int n100=0,n50=0,n20=0,n1 = 0;

    switch(n>=100){
        case 1: 
        n100 = n/100;
        n = n%100;
        break;
    }
    switch(n>=50){
        case 1: 
        n50 = n/50;
        n = n%50;
        break;
    }
    switch(n>=20){
        case 1: 
        n20 = n/20;
        n = n%20;
        break;
    }
    switch(n>=1){
        case 1: 
        n1 = n/1;
        n = n%1;
        break;
    }
    cout<<"100 = "<<n100<<endl;
    cout<<"50 = "<<n50<<endl;
    cout<<"20 = "<<n20<<endl;
    cout<<"1 = "<<n1<<endl;
}