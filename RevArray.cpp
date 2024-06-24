#include <iostream>

using namespace std;

void RevArr(int arr[],int n){

    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){

    //  int N;
    //  cout<<"Enter your NO.";
    //  cin>>N;

      int arr[]={1,2,3,4,5,7};

      int n=sizeof(arr)/sizeof(arr[0]); // Replace arr.size() with the correct size of the array

      RevArr(arr,n);

      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }

     return 0;

 }

