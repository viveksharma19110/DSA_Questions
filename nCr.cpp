#include <iostream>

using namespace std;

int fun(int n){
    int fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }

    return fact;


}

int main(){

    int n,r;
    cin>>n>>r;

    int num=fun(n);
    int den=fun(n-r);

    int nCr=num/den;

    cout<<nCr;
}