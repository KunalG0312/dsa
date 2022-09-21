#include<iostream>
using namespace std;

//given array , every element is unique, but one number repeats itself
// find the number that repeats
// duplicate element will appear only twice

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the members of the array : ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    int ans = 0;

    for(int i = 0; i < size; i++){
        for(int j = i+1; i < size; i++){
            ans = arr[i] ^ arr[j];
            if(ans == 0){
                cout<<arr[i-1]<<" is the duplicate element.";
            }
        }
    }
}