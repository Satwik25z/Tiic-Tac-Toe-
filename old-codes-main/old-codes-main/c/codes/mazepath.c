#include<stdio.h>
int maze(int sr, int sc , int i , int j){
    if(sr>i || sc>j) return 0;
    if(sr==i && sc==j) return 1;
    return maze(sr+1,sc,i,j)+maze(sr,sc+1,i,j);
}
int main(){
    int i,j;
    printf("Enter no of rows: ");
    scanf("%d",&i);
    printf("Enter no of columns: ");
    scanf("%d",&j); 
    printf("%d",maze(1,1,i,j));

    return 0;
}