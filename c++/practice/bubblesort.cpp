#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec = {5,4,-1,6,4,-10,6};
int n = vec.size();
    // for(int i=0;i<n-1;i++){
    //    for(int j=0;j<n-1-i;j++){
    //     if(vec[j]>vec[j+1]){
    //         swap(vec[j],vec[j+1]);
    //     }
    //    }
    // }
    for(int i = 1 ; i < n ; i++){
        int prev = i-1;
        int cur = vec[i];
        while(prev >= 0 && vec[prev]>cur){
            vec[prev+1] = vec[prev];
            prev--;
        }
        vec[prev+1] = cur;
    }
    for(int val : vec){
    cout<<val<<" ";
}
    return 0;
}