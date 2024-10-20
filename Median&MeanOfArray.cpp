// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double findMean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    double mean=sum/n;
    
    return mean;
    
    
}

double findMedian(int a[], int n)
{
   
    sort(a, a + n);
 
   
    if (n % 2 != 0){
        double median1=a[n/2];
        
        return median1;
    }
    else{
        double median2=(a[n/2]+a[(n-1)/2])/2.0;
        
        return median2;
    }
}

int main() {
      int a[] = { 1, 3, 4, 2, 7, 5, 8, 6 ,6};
    int N = sizeof(a) / sizeof(a[0]);
   
    // Function call
    cout << "Mean = " << findMean(a, N) << endl;
    cout << "Median = " << findMedian(a, N) << endl;
    return 0;
    return 0;
}