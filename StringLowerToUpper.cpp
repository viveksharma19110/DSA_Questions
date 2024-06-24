#include<iostream>
using namespace std;

int main(){
    string str="my name is vivek sharma";

    int n=str.length();

    for(int i=0;i<n;i++){
        if(str[i]==str[0]){
            str[i]=towupper(str[i]);
        }
        else if (str[i]==' '){
            str[i+1]=towupper(str[i+1]);

        }
        
        

    }

    cout<<str;
}