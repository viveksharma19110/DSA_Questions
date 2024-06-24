#include <iostream>

using namespace std;

int fact(int digit){
    //base condition
    if(digit==0)
    return 1;
    
    return digit *fact(digit-1);
}



int main(){

    
   
   int n;
   cout<<"Enter the value "<<endl;
   cin>>n;
   
   int dum=n;
   
   int sum=0;
   
   while(n!=0){
       int digit=n%10;
       sum=sum+fact(digit);
       n=n/10;
   }
   
   if(sum==dum){
       cout<<"It is the strong no.";
   }
   else{
       cout<<"It is not strong no.";
   }
   
    


}