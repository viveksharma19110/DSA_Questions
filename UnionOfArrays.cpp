#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> findUnion(int arr1[], int n1, int arr2[], int n2) {
    set<int> st;
    vector<int> temp;

    for(int i = 0; i < n1; i++) {
        st.insert(arr1[i]);
    }

    for(int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }

    for(auto i: st) {
        temp.push_back(i);
    }

    return temp;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6, 7, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> unionArr = findUnion(arr1, n1, arr2, n2);

    cout << "Union of two arrays is: ";
    for(auto i: unionArr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}