// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include<vector>
using namespace std;




int main() {
    
    int k;
    cout<<"Enter the Element whose order to be find"<<endl;
    cin>>k;
    
    
    int arr[]={1,2,3,4,6,7};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<< i;
        }
    }
  
     }
   
 
    
    
   
