#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;

    d=d%n;

    // Reverse first n-d elements
    reverse(arr, arr + n - d);
    // Reverse last d elements
    reverse(arr + n - d, arr + n);
    // Reverse whole array
    reverse(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}