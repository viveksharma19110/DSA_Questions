#include<iostream>
#include<stack>
using namespace std;

int main() {
    string s = "My name is Vivek Sharma";
    stack<string> st;
    string word = "";

    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            st.push(word);
            word = "";
        } else {
            word += s[i];
        }
    }
    st.push(word); // push the last word

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}