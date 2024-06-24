#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int countMaxFreqElements(vector<int>& nums) {
    unordered_map<int, int> map;
    int maxFreq = 0;
    int count = 0;

    for (int num : nums) {
        map[num]++;
        maxFreq = max(maxFreq, map[num]);
    }

    for (auto x : map) {
        if (x.second == maxFreq) {
            count += x.second;
        }
    }

    return count;
}

int main() {
    vector<int> nums = {1,2,2,3,1,4};
    cout << countMaxFreqElements(nums);
    return 0;
}