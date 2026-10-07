#include <stdio.h>

int main() {
    int r,a,b,c;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d",&r,&a);
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d%d",&b,&c);
    if(a!=b){
        printf("Matrix can't be multiplied");
        return 0;
    }
    int A[r][a], B[a][c];

    printf("Enter elements of matrix A (%d x %d):\n",r,a);
    for(int i = 0; i<r; i++) {
        for(int j = 0;j<a; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B (%d x %d):\n",a,c);
    for(int i = 0; i<a; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matrix mmultiplication:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int sum=0;
            for(int k=0;k<a;k++){
                sum=sum+(A[i][k]*B[k][j]);
            }
            printf("%d ",sum);
        }
        printf("\n");
    }

    return 0;
}
