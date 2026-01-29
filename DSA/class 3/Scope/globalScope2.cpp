#include<iostream>
using namespace std;

int x =10;

int main(){
    int x = 20;
    cout << x<< endl;

    {
        int x = 30;
        x++;
        cout << x<<  endl;
    }
    cout << x<< endl;
}