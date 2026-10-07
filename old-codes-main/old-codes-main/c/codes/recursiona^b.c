#include<stdio.h>
int fn(int a, int b){
    if(b==0) return 1;
    return a*fn(a,b-1);
}
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int z=fn(a,b);
    printf("%d",z);
    return 0;
}