#include<iostream>
#include<vector>
#include<map>
#include<climits>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map<int , int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int maxi = INT_MIN;
    int ans = -1;

    for(auto x : mpp){
        if(x.second > maxi){
            maxi = x.second;
            ans = x.first;
        }
    }

    cout << ans;

    return 0;
}