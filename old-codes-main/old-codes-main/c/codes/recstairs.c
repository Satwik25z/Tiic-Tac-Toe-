#include<stdio.h>
int stairs(int n){
    if(n==1 || n==2) return n;
    if(n==3) return 4;
    return stairs(n-1)+stairs(n-2)+stairs(n-3);
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Number of ways are %d",stairs(n));
    return 0;
}