#include <iostream>

using namespace std;

bool rev(int n){

    int reverse=0;

    int dumm=n;

    while(n!=0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }

    if(dumm==reverse){
        return true;
    }
    else{
        return false;
    }

    


}

int main(){

    
    int min,max;
    
   
    cout<<"enter the range min term"<<endl;

     cin>>min;

     cout<<"enter the range max term"<<endl;

     cin>>max;

    for(int i=min;i<=max;i++){
            if(rev(i)){
                cout<<i<<" ";

            }
    }
    


}