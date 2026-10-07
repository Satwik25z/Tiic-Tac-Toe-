#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={1,2,3,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    bool found=false;
    for(int i=0;i<n;i++){
        bool unique=true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                unique=false;
                break;
            }
        }
        if(unique==true){
            printf("%d ",arr[i]);;
            found=true;
        }
    }
    if(found=false){
        printf("No unique element");
    }
    return 0;
}