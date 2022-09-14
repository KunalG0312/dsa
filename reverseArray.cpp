#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int n){
    
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}




int main(){
    
    int arr[100];
    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    reverse(arr,n);
    printArray(arr,n);
    return 0;
}