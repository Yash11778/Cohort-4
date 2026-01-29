#include<iostream>
using namespace std;

void print1(int n){
    for(int i=1; i<=n; i++){
        cout<< i<< " ";
    }
}


int main(){
    print1(10);
    print1(6);
    print1(3);
}