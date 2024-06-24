
#include <iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main() {
    
    int arr[]={1,2,3,4,5};
    
    int n=sizeof(arr)/sizeof(int);
    
    stack<int> s;
    
    for(int i=0;i<n;i++){
        s.push(arr[i]); // Push the array values, not the indices
    }
    
    vector<int>ans;
    
    while(!s.empty()){
        int rev=s.top();
        ans.push_back(rev);
        s.pop();
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; // Print the elements of the vector
    }

    return 0;
}