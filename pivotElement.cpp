#include<iostream>
using namespace std;

//given a rotated sorted like 7 9 1 2 3
//find the pivot element, which in this case is 1

//example 2  :   98 54 23 56 83 99, answer: 23


int pivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    //return arr[s];
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++){
        cin>>arr[n];
    }

    cout<<"Pivot element is in the position : "<<pivot(arr,n);
}