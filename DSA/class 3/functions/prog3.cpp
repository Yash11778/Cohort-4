#include<iostream>
using namespace std;

void printsq(int n, char ch){
    for(int i=1; i<=n; i++){
        for(int j=1; j<= n; j++){
            cout<< ch;
        }
        cout << endl;
    }
}


int main(){
    printsq(10, '#');
    printsq(6, '@');
    printsq(3, '-');
}