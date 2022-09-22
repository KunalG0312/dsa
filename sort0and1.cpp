#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[], int n){
    int left = 0, right = n-1;

    while(left < right){
        if(arr[left] == 0){
            left++;
        }
        if(arr[right] == 1){
            right--;
        }
        if(arr[left] == 1 && arr[right] == 0){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    sortOne(arr1,n);
    printArray(arr1,n);
}