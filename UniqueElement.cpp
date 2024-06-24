#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    map<int, int> mpp;
    vector<int> arr = {1, 1, 2, 3, 3};

    for (int i = 0; i < arr.size(); i++) {
        mpp[arr[i]]++;
    }

    // Find the unique element
    for (const auto& x : mpp) {
        if (x.second == 1) {
            cout << "Unique element: " << x.first << endl;
            break;
        }
    }

    return 0;
}
