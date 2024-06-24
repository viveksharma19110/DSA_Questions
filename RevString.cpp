#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

int main(){

    int arr[]={1,2,2,3,3,3,4,4,4,4};

    int n=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int>mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;

    }

    for(auto i:mpp){
        cout<<"The array element is:"<<i.first<<"  ";
        cout<<"Its frequency is:"<<i.second;
    }
    

    
}