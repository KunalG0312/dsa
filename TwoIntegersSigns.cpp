#include<iostream>
using namespace std;

int main(){
    int x = 4;
    int y = -8;

    bool isOpposite = ((x^y) < 0);

    if(isOpposite){
        cout<<"opposite signs";
    }
    else{
        cout<<"Same signs";
    }
}