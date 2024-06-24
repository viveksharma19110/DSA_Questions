#include <iostream>

using namespace std;

float GPSum(int n,float a,float r){
    float sum=0;
    for(int i=0;i<n;i++){
        sum=a+sum;
        a=a*r;
    }
    
    return sum;
}

int main(){

    
   float a=2,r=1.5;
   int n;
   cout<<"Enter the value upto sum of GP needed";
   cin>>n;
   
   cout<<"Sum of GP  "<<GPSum(n,a,r);
   
    


}