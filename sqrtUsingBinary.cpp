#include<iostream>
using namespace std;

//given any number , find its square root


int sqrt(int n){ // will give oly integer part of the square root
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else if(square > n){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i<precision; i++){
        factor = factor/10;
        for(double j = ans; j*j<n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}


int main(){
    int n ;

    cout<<"Enter a number : ";
    cin>>n;

    int tempSol = sqrt(n);

    cout<<"Square root of the number : "<<morePrecision(n,3,tempSol)<<endl;
}