#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int sumOfIntegers(string &st, int l) {
        string tempSum = "";
        int sum = 0;
        for (int i = 0; i < l; i++) {
            if (st[i] >= '0' && st[i] <= '9') {
                tempSum += st[i];
            } else {
                if (!tempSum.empty()) {
                    sum += stoi(tempSum);
                    tempSum = "";
                }
            }
        }
        if (!tempSum.empty()) {
            sum += stoi(tempSum);
        }
        return sum;
    }
};

int main() {
    string st = "1a30z67";
    int l = st.length();
    Solution obj;
    cout << "Sum: " << obj.sumOfIntegers(st, l);
    return 0;
}