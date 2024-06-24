#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;

    d = d % n;

    vector<int> temp(d);

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i]; // to put element of arr in temp
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i]; // to rotate the arr
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = arr[i - (n - d)];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}