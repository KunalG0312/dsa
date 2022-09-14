#include<iostream>
#include<climits>
using namespace std;


int arraySum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}



int main(){
    int n;
    int arr[100];

    cout<<"Enter the size of array : ";
    cin>>n;
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Sum of all elements in the array = "<<arraySum(arr, n);
    return 0;
}