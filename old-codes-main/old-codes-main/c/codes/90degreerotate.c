#include<stdio.h>
int main(){
    int arr[5][4];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[4-j][i]);
        }
        printf("\n");
    }
    return 0;
}