#include <iostream>

using namespace std;

//if n = 5 print below pattern
//* ** 

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
}

