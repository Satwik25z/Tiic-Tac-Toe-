#include<stdio.h>
#include<stdlib.h>
struct book{
    char author[50];
    char title[50];
    float price;
};
int main(){
    int n;
    printf("Enter number of books: ");
    scanf("%d",&n);
    struct book* ptr=(struct book*) malloc(n*4);

    return 0;
}