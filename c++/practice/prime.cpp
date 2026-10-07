#include<iostream>
using namespace std;
bool checkPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void prime(int n){
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n,r;
    cin>>n;
    prime(n);
    return 0;
}