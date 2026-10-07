#include<stdio.h>
#include<math.h>
int main(){
    int arr[]={1,2,3,4,5,6,7},n;
    n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //    for(int j=0;j<n-1;j++){
    //      if(arr[j+1]>arr[j]){
    //         int temp=arr[j];
    //         arr[j]=arr[j+1];
    //         arr[j+1]=temp;
    //      }
    //    }
    // }
    // printf("Sorted array: ");
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    int search=5;
    int low=0;
    int high=n-1;
    int result=0;
    while(low<=high){
       int mid=(low+high)/2;
        if(arr[mid]==search){
            result =mid;
            break;
        }
        else if(arr[mid]>search){
            high=mid-1;
        }
        else low=mid+1;
    }
    printf("\nelement found at position %d",result+1);
    

    return 0;
}