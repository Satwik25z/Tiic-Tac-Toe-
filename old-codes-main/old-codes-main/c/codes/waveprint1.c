#include<stdio.h>
int main(){
    int arr[5][4];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(i%2==0){
                printf("%d ",arr[i][j]);
            }
            else printf("%d ",arr[i][3-j]);
        }
        printf("\n");
    }
    return 0;
}