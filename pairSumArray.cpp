#include<iostream>
using namespace std;

// if a[] = 2,3,4,5
// output = 5, 9

// if odd number of elements {2,3,4,5,6}
// output = 5, 9, 6

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter elements of the array : ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int value;
    cout<<"Enter a value : ";
    cin>>value;

    try{
        int count = 0;
        for(int i = 0; i < size; i++){
            for(int j = i+1; i < size; i++){
                if(arr[i] + arr[j] == value){
                    cout<<"The sum of "<<arr[i]<<" and "<<arr[j]<<" results in value "<<value;
                    count++;
                }
            }
        }
        if(count == 0){
            throw 505;
        }
    }
    catch(...){
        cout<<"Pair not found whose sum equals to "<<value;
    }
}