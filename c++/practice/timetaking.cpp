#include<iostream>
using namespace std;
int main(){
    int n,m=1;
    char ch='A';
    cout<<"enter n:";
    cin>>n;
    for(int i=0;i<(2*n)-1;i++){
        if(i<n){
            for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<2;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*i)-1;j++){
            cout<<" ";
        }
        if(i>0){
            for(int j=1;j<2;j++){
            cout<<"*";
        }
        }
        cout<<endl;
        }
        else{
            for(int j=1;j<=i-n+1;j++){
                cout<<" ";
            }
            for(int j=1;j<2;j++){
            cout<<"*";
        }
            for(int j=(2*(n-1))-3-(2*(i-n));j>0;j--){
                cout<<" ";
            }
            if(i!=(2*n)-2){
                cout<<"*";
            }
            
            cout<<endl;
        }
        
    }
    return 0;
}