#include<stdio.h>
int main(){
    int M[6]={1,2,3,4,5,6};
    int A[6]={5,6,7,8,9,10};
    
    int sum=0;
    int size= sizeof(M)/sizeof(M[0]);
    int intersec[size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(M[i]==A[j]) {
                intersec[sum]=M[i];
                sum++;
            }
        }
    }
    printf("Common elements are: ");
    for(int i=0;i<sum;i++){
    printf("%d ",intersec[i]);
    }
    int delete=0;
    for(int i=0;i<size;i++){
        int s=sizeof(intersec)/sizeof(intersec[0]);
        for(int j=0;j<s;j++){
            if(M[i]==intersec[j]){
                M[i]=M[i+1];
                int delete=1;  
            }
        }
        if(delete==1){
            size--;
        }
        }

        printf("\n");
     for(int i=0;i<size;i++){
    printf("%d ",M[i]);
    }
    return 0;
}