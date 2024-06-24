#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second) 
        return a.first < b.first;
    return a.second > b.second;
}

void sortByFrequency(vector<int>& arr) {
    map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    vector<pair<int, int>> freqArr(freq.begin(), freq.end());
    sort(freqArr.begin(), freqArr.end(), compare);

    for (pair<int, int>& p : freqArr) {
        for (int i = 0; i < p.second; i++) {
            cout << p.first << " ";
        }
    }
}

int main() {
    vector<int> arr = {2, 5, 2, 8, 5, 6, 8, 8};
    sortByFrequency(arr);
    return 0;
}