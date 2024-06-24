#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    cin >> s;

    unordered_map<char, int> mpp;
    vector<char> order;

    for(int i=0; i<s.size(); i++){
        if(mpp[s[i]]++ == 0){
            order.push_back(s[i]);
        }
    }

    for(char c : order){
        cout << c << mpp[c] << " ";
    }

    return 0;
}