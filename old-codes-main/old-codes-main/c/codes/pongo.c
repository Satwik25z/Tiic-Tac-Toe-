#include<stdio.h>
#include<string.h>
struct student{
   int rollno;
   char name[30];
   int year;
};
void check(char s1[],char s2[]){
    if(strcmp(s1,s2)==0) printf("same");
    else printf("not same");
}
int main(){
    // struct student s1,s2;
    // s1.rollno=1025;
    // strcpy(s1.department,"copc");
    // strcpy(s2.department,"copc");
    // check(s1.department,s2.department);
    struct student a[3];
    for(int i=0;i<3;i++){
       scanf("%s%d%d",a[i].name,&a[i].rollno,&a[i].year);
    }
    for(int i=0;i<3;i++){
        printf("%s %d %d\n",a[i].name,a[i].rollno,a[i].year);
    }
    return 0;
}