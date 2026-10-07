#include<stdio.h>
int main(){
    int A[] = { 55, 56,65, 75, 78, 78, 90 };
    int key=56,mid; //to be searched
    int size = sizeof(A)/sizeof(A[0]); //array size
    int low=0,high=size-1,found=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(key==A[mid]){
            found=mid;
            break;
        }
        else if(key>A[mid]){
            low=mid+1;
        }
        else high=mid-1;
    }
    if(found!=-1)printf("element found at postion: %d",found+1);
   else printf("element not found");
     return 0;
}