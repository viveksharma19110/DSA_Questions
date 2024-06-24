#include <iostream>
#include <map>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="my name is vivek";
    
    int words=0;
    
      for(int i=0;i<s.length();i++){
       if(s[i]==' '){
           words++;
       }
      }

 cout<<words+1;
}
   

   