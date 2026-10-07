#include<stdio.h>
void both(int n){
    if(n==0) return;
    printf("%d\n",n);
    both(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    both(n);

    return 0;
}