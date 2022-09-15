#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    int arr[n];
    int count[n] = {0};

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            if(arr[i] == arr[j]){
                count[i]++;
            }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<count[i];
    }

    cout<<endl;
    
    for(int i = 0; i<n; i++){
        if(count[i] != 0){
            cout<<arr[i]<<" is not unique in the array"<<endl;
        }
    }
}