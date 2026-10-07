#include<stdio.h>
int main(){
    int arr[4][5],r;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int no1,max1=0;
    for(int i=0;i<4;i++){     
        no1=0;  
        for(int j=0;j<5;j++){
            if(arr[i][j]==1) no1++;
        }
        if(no1>max1){
            max1=no1;
            r=i;
        }
    }
    printf("The max number of 1's are: %d in row-%d",max1,r+1);

    return 0;
}