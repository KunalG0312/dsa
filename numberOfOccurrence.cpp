#include<iostream>
using namespace std;

//given a sorted array : 1 2 3 3 3 4 5
// and a key = 3
//find the number of occurrences of the given key, so if key = 3, number of occurrences = 3

int firstOccurrence(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s <= e){
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

    cout<<"Number of occurrence of the key "<<key<<" : "<<last - first + 1;
}