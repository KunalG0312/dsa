#include<iostream>
using namespace std;


//question

// given array, only one element occurs once
// every other element in the array , will appear twice
// find the element that will occur only once, that is find the unique element

//solution

// XOR function   a ^ a = 0     and a ^ 0 = a
//elements that occur twice will result in 0 when XOR'd together
//the element that appears only once, when XOR'd with zero will give same value as itself(a ^ 0 = a)

int main(){
    int size;
    cout<<"Enter the size of the array (can only be odd number) : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    cout<<"The unique element in the array is "<<ans;

}