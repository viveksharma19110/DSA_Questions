#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printMaxOfSubarrays(vector<int>& arr, int K) {
    for (int i = 0; i <= arr.size() - K; i++) {
        int maxVal = arr[i];
        for (int j = 1; j < K; j++) {
            if (arr[i + j] > maxVal) {
                maxVal = arr[i + j];
            }
        }
        cout << maxVal << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int K = 3;
    printMaxOfSubarrays(arr, K);
    return 0;
}