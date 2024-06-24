#include <iostream>
#include <unordered_map>

using namespace std;

void findDuplicates(int arr[], int n) {
    unordered_map<int, int> count;

    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    cout << "Duplicate elements are: ";
    for(auto i: count) {
        if(i.second > 1) {
            cout << i.first << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}