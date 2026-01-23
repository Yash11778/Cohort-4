#include<iostream>
using namespace std;

int main(){
    int ans =0;
    int n;
    cout << "Enter Number : ";
    cin >> n;
    
    while(n!=0){
        ans = (ans*10) + n % 10;
        n = n/10;
    }
    cout << ans << endl;
    return 0;
}