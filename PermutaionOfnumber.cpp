// Online C++ compiler to run C++ program online
#include <iostream>


using namespace std;

int fact(int n){
    //base case
    if(n==0)
    return 1;
    
    return n*fact(n-1);
}


int main() {
    
    int n,r;
    cout<<"Enter your n & r"<<endl;
    cin>>n>>r;
    
  int num=fact(n);
  int den=fact(n-r);
  
  cout<<num/den;
  
     }
   
 
    
    
   
