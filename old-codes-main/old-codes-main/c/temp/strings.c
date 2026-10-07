#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Hello Everyone!";
    char str2[50];
    // scanf("%[^\n]s",str2);
    // gets(str2);
    int i=strlen(str);
    while(i>=0){
        printf("%c",str[i]);
        i--;
    }
    return 0;
}