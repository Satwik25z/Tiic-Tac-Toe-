#include<stdio.h>
void swap(int* x, int* y){
    int temp =*x;
    *x =*y;
    *y= temp;
    return;
}
int main(){
    int a = 5, b = 10;
    swap(&a,&b);
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}