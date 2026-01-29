#include<iostream>
using namespace std;

void f(int n){
    
    cout<< "Hello, I am function f"<< endl;

    return;
    
    //return uppar likha isliye n value print nhi hogi
    
    cout << n<< endl;
    
    //return          //ye line mee agr return rhega toh hee n return hoga
}

int main(){
    f(10);
    f(20);
}