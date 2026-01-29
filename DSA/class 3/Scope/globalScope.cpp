#include<iostream>
using namespace std;

int x =10;

void g(){
    cout << x << endl;
}

void f(){
    x++;
}


int main(){
    x = 20;
 
    f();
    cout << x;
}