#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={89, 78, 66, 89, 45, 34, 12, 57},max=INT_MIN,smax=INT_MIN;
    for(int i=1;i<8;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<8;i++){
        if(arr[i]!=max && arr[i]>smax){
                smax=arr[i];
        }
    }
    printf("%d",smax);
      
    return 0;
}