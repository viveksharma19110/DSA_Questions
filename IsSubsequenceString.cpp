#include <iostream>
using namespace std;

bool isSubsequence(string s, string t) {
        int sp = 0;
        int tp = 0;

        while (sp < s.length() && tp < t.length()) {
            if (s[sp] == t[tp]) {
                sp++;
            }
            tp++;
        }

        return sp == s.length();        
}

int main() {
    string s = "acb";
    string t = "ahbgdc";
    cout << (isSubsequence(s, t) ? "true" : "false") << endl;
    return 0;
}