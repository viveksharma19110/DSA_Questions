#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int dumm=n;
    int rev=0;

    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    if(rev==dumm){
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not Palindrome";
    }
}