#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

     int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>temp(0);

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }

     for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }

     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}