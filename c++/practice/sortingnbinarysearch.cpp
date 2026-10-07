#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec = {5,4,-1,6,4,-10,6};
int n = vec.size();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(vec[j]<vec[i]){
            swap(vec[i],vec[j]);
        }
    }
}
for(int val : vec){
    cout<<val<<" ";
}
int start = 0;
int end = n-1;
int value;
cout<<"enter element:";
cin>>value;
for(int i=0 ; i<n ; i++){
    int mid = (start+end)/2;
    if(value > vec[mid]){
        start = mid+1;
    }
    else if(value < vec[mid]){
        end = mid-1;
    }
    else if( value == vec[mid]){
        cout<<"element found at "<< mid << endl;
        return 0;
    }
    cout<<"not found";
    return 0;
}
return 0;
}