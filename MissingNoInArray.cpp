#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n-1); 

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    int XOR1 = 0;
    for(int i=0;i<n-1;i++){
        XOR1 = XOR1 ^ arr[i];
    }

    int XOR2 = 0;
    for(int i=1;i<=n;i++){
        XOR2 = XOR2 ^ i;
    }

    int missingNumber = XOR1 ^ XOR2;

    cout << missingNumber;

    return 0;
}