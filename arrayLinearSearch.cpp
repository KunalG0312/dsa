#include<iostream>
using namespace std;


bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}




int main(){
    int key;
    cout<<"Enter element to be searched in the array : ";
    cin>>key;

    int arr[10] = {2, 4 , 6, 8, 10, 12, 14, 16, 18, 20};

    bool found = search(arr, 10, key);

    if(found){
        cout<<"Key is present in the array";
    }
    else{
        cout<<"Key is not present in the array";
    }
}