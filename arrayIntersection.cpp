#include<iostream>
using namespace std;

// if a = {1,2,3,4,5,6}
// and b = {2,4,6,8}
// then output will be {2,4,6}

int main(){
    // int a[6] = {1,2,3,4,5,6};
    // int b[4] = {2,4,6,8};

    int alen,blen;
    cout<<"Enter size of first array : ";
    cin>>alen;
    cout<<"Enter size of second array : ";
    cin>>blen;

    int a[alen];
    int b[blen];



    cout<<"Enter elements of the first array : ";
    for(int i = 0; i<alen; i++){
        cin>>a[i];
    }

    cout<<"Enter elements of the second array : ";
    for(int i = 0; i<blen; i++){
        cin>>b[i];
    }

    for(int i = 0; i<blen; i++){
        for(int j = 0; j<alen; j++){
            if(b[i] == a[j]){
                cout<<b[i]<<" ";
            }
        }
    }

}