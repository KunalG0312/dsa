#include<bits/stdc++.h>
using namespace std;

int threeSum(int arr[], int n, int K){

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == K){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    cout<<endl;
                }
            }
        }
    }
}

int main(){
    int n;
    int target;
    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter target sum : ";
    cin>>target;

    threeSum(arr, n, target);

    return 0;

}