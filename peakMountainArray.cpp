#include<iostream>
using namespace std;

// given a mountain array :  2 3 5 1     or     3 4 5 9 7 2
// meaning array increases first, after reaching certain peak value, the array decreases

//objective : find peak value


int peak(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s < e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return arr[s];
}


int main(){
    int n;

    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Peak of the mountain array is : "<<peak(arr,n);

}