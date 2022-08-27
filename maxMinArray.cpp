#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int max = INT_FAST64_MIN;

    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n){
    int min = INT_FAST64_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nMaximum value of array : "<<getMax(arr,n)<<endl;
    cout<<"\nMinimum value of array : "<<getMin(arr,n);

}