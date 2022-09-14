#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int n){
    int maximum = INT_MIN;
    for(int i = 0; i<n; i++){
        maximum = max(maximum, arr[i]);
    }
    return maximum;
}

int getMin(int arr[], int n){
    int minimum = INT_MAX;
    for(int i = 0; i<n; i++){
        minimum = min(minimum, arr[i]);
    }
    return minimum;
}


int main(){
    int arr[100];
    int n;
    cout<<"Enter number of elements in the array : ";
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The maximum number of the array : "<<getMax(arr,n);
    cout<<endl;
    cout<<"The minimum number of the arrat : "<<getMin(arr,n);
}