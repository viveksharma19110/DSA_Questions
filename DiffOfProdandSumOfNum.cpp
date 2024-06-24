
#include <iostream>

using namespace std;

int main(){

   int N;
   cout<<"Enter your NO.";
   cin>>N;

   int lastDigit;
   int sum=0;
   int prod=1;

   while(N!=0){
      lastDigit=N%10;
      sum=sum+lastDigit;
      prod=prod*lastDigit;
      N=N/10;
   }

   int Diff=prod-sum;

   cout<<"Difference of Prod-Sum:"<<Diff;



 }

