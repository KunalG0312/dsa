#include<iostream>
using namespace std;

// given any array : arr = 1 2 3 3 3 3 5
// and a key : 3
// find first and last occurrence of 3 that is : 2 5


int firstOccurrence(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < k){
            s = mid + 1;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < k){
            s = mid + 1;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    int key;

    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key : ";
    cin>>key;

    int first,last;
    first = firstOccurrence(arr,n,key);
    last = lastOccurrence(arr,n,key);

    cout<<"First and last occurrence of the key "<<key<<" : "<<first<<" ,"<<last;
}