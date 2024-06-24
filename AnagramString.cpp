#include <iostream>
#include <string>
#include <algorithm> // Include this for std::sort
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for (int i = 0; i < t.length(); i++) {
        if (s[i] != t[i])
            return false;
    }
    return true;
}

int main() {
    string s,t;
    getline(cin,s);
    getline(cin,t);

    if(isAnagram(s,t)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}