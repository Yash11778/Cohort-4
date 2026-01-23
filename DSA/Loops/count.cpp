#include<iostream>
using namespace std;

int main(){
    int count = 0;
    int n;
    cout << "ENter Number : ";
    cin >> n;
    while(n!=0){
        count ++;
        n= n/10;
    }
    cout << count << endl;
    return 0;
}