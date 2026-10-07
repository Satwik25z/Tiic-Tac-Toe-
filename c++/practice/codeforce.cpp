#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>> n ;
    vector<int> vec(n);
    for(int i = 0 ; i < n ; i++){
        cin>> vec[i];
    }
    
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}