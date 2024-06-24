#include <iostream>
#include <vector>
#include <map>
using namespace std;

int subarraysWithKDistinct(vector<int>& nums, int k) {
    int cnt = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        map<int, int> mpp;
        for (int j = i; j < n; j++) {
            mpp[nums[j]]++;
            if (mpp.size() == k) cnt++;
            else if (mpp.size() > k) break;
        }
    }
    return cnt;
}

int main() {
    vector<int> nums = {1, 2, 1, 2, 3};
    int k = 2;
    cout << subarraysWithKDistinct(nums, k) << endl;
    return 0;
}