#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans*=i;
    }
    return ans;
}

int main(){
    int n, r;
    cin>>n>>r;

    int nfact = fact(n);

    int rfact = fact(r);

    int nrfact = fact(n-r);

    cout<< nfact/(rfact*nrfact)<< endl;
}