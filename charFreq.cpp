#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
    std::string s = "vivek";
    int n = s.length();
    std::map<char, int> mpp;
    std::vector<char> order;

    for (int i = 0; i < n; i++) {
        if (mpp[s[i]]++ == 0) {
            order.push_back(s[i]);
        }
    }

    for (char c : order) {
        std::cout << c << mpp[c] << " ";
    }

    return 0;
}