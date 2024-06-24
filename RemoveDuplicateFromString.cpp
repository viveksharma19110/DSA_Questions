// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include<vector>
using namespace std;


int main() {
    
    string s="bcabc";
    
    vector<char>ans;
    
    set<char>st;
   
     for(int i=0;i<s.length();i++){
       if(st.insert(s[i]).second){
           ans.push_back(s[i]);
        }
    }
   
     for(int i=0;i<ans.size();i++){
       cout<<ans[i];
     }
   
 
    
    
   
}