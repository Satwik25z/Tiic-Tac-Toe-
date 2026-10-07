#include<iostream>
using namespace std;
int main(){
    int arr[5]={88,4,-7,89,78};
    int size=sizeof(arr)/sizeof(int);
    int maximum=arr[0];
    int minimum=arr[0];
    for(int i=1;i<size;i++){
        minimum=min(minimum,arr[i]);
        maximum=max(maximum,arr[i]);
    }
    cout<<"maximum="<<maximum<<endl;
    cout<<"minimum="<<minimum<<endl;

    return 0;
}