#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int *incr(int X[3],int k){
int i;
for(i=0;i<k;i++) ++X[i];
return X;
}
int main(){
int A[] = {1,2,3},n=3,i,*B;
B = incr(A,n);
for(i=0;i<n;i++) printf(" %d",B[i]);
    return 0;
}