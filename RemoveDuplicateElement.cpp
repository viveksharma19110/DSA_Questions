#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    
    int j=0;
    for(auto x:st){
        arr[j++]=x;
    }

    for (int i = 0; i < j; i++) // Changed from 'i < n' to 'i < j'
    {
        cout << arr[i] << " ";
    }

    return 0;
}