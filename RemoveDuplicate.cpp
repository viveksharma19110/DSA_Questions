#include <iostream>
#include <set>

using namespace std;

int main(){

    int arr[]={1,2,3,3,4,4,5,5};

    int n=sizeof(arr)/sizeof(arr[0]);

    set<int>s;

    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    int j=0;
    for(auto x:s){
        arr[j]=x;
        j++;
    }

    int k=s.size();

    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }


}