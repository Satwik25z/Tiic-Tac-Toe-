#include<stdio.h>
int main(){
    int arr[90],size,pos,value;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter your array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your array is: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter position of insertion: ");
    scanf("%d",&pos);
    printf("Enter value: ");
    scanf("%d",&value);
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    printf("\nNew array is: ");
    for(int i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
