#include<stdio.h>
int main(){
    int arr[5][6];
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int minr=0,maxr=4,minc=0,maxc=5,count=0;
    while(count<30){
        for(int i=minc;i<=maxc;i++){
            printf("%d ",arr[minr][i]);
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        for(int i=maxc;i>=minc;i--){
            printf("%d ",arr[maxr][i]);
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    

    return 0;
}