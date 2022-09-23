#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array in increasing order : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to find : ";
    int key;
    cin>>key;
    int result = binarySearch(arr,n,key);

    cout<<"Element "<<key<<" found at "<<result;
}