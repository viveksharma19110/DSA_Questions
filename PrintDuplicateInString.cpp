#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    std::string s = "appleaapplea";
    int n = s.length();
    std::map<char, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[s[i]]++;
    }

    

    for (auto x : mpp) {
        if(x.second>1){
            cout<<x.first<<"-" <<x.second<<endl;
        }
    }



    return 0;
}