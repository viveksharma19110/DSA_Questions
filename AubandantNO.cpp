// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;



int main() {
    int n; 
    cin>>n;
    
    int sum=0;
    
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    
    if(sum>n){
        cout<<"It is the no.";
    }
    else{
        cout<<"its not the no.";
    }
    
   
    return 0;
}