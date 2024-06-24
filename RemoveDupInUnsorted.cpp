#include<iostream>
#include<map>
using namespace std ;

void duplicate(int arr[], int n) {

        map<int, int>mp ;

        for (int i = 0; i < n; i++) {
            if (mp.find(arr[i]) == mp.end()) {
                
                mp[arr[i]]++;

                cout << arr[i] << " ";
            }
        }
    }


int main() {

    int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34} ;
    int n = 9  ;

   ;
    duplicate(arr, n) ;

    return 0 ;
}