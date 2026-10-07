#include<stdio.h>
int min(int a, int b){
    int min=b;
    if(a<b)
    min=a;
    return min;
}
int main(){
    printf("Enter numbers: ");
    int a,b,gcd;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=min(a,b);i++){
    if(a%i==0 && b%i==0)
    gcd=i;
    }
    
    printf("The gcd of the two numbers is: %d",gcd);
    return 0;
}