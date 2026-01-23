#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "ENter Number : ";
    cin >> n;
    while(n!=0){
        cout << n%10;
        n= n/10;
    }
    return 0;
}