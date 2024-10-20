#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "My name is Vivek Sharma";
    string word = "", maxWord = "";
    int maxLength = 0;

    for (int i = 0; i <= s.length(); i++) {
        
        if (s[i] == ' ' || s[i] == '\0') {
            if (word.length() > maxLength) {
                maxLength = word.length();
                maxWord = word;
            }
            word = "";
        } else {
            word = word + s[i];
        }
    }

    cout << "The largest word is: " << maxWord << endl;
    return 0;
}