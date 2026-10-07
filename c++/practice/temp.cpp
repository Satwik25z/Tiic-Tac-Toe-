#include<iostream>
using namespace std;

int main(){
    
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{17,28,19,99},{4,2,8,18}};
    int n = 4;
    int j = n-1;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i][i];
        sum += arr[i][j];
        j--;
    }
    if(n%2!=0){
        sum -= arr[n/2][n/2];
    }
    cout<<sum<<endl;
    return 0;
}