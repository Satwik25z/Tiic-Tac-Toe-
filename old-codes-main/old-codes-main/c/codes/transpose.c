#include<stdio.h>
int main(){
    int arr[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
         printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    
    // int brr[5][4];
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<4;j++){
    //         brr[i][j]=arr[j][i];
    //     }
    // }
    // printf("\n");
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<4;j++){
    //         printf("%d ",brr[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}