#include<iostream>
using namespace std;

int sum1(int a, int b){
    return a+b;
}

int main(){
    int ans1= sum1(2,5);
    int ans2=sum1(5,8);
    cout << ans1<< " "<<ans2<<endl;
}