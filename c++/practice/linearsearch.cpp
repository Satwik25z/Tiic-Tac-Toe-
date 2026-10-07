#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x,index=-1;
    cout<<"enter element for searching: "<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            index=i;
            break;
        }
    }
    if(index!=-1){
        cout<<"element found at index "<<index<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}