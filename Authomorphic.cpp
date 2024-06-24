// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


bool Automorphic(int n){
    int sq=n*n;
    
    while(n!=0){
        if(n%10!=sq%10){
            return false;
        }
       
        n=n/10;
        sq=sq/10;
    }
    return true;
    
    
}

int main() {
    int n; 
    
    cout<<"Enter the No."<<endl;
    cin>>n;
    
    if(Automorphic(n)){
        cout<<"No. is Automorphic!";
    }
    else{
        cout<<"No. is not Automorphic!";
    }
   
    return 0;
}