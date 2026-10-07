#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
    int rollno;
    float marks;
};
void inputstudents(struct student* p,int n){
    for(int i=0;i<n;i++){
        printf("Enter name,rollno,marks of student %d: ",i+1);
        scanf("%s%d%f",p[i].name,&p[i].rollno,&p[i].marks);
    }
    return;
}
void displaystudents(struct student* p, int n){
    for(int i=0;i<n;i++){
        printf("Name: %s Roll: %d marks: %f",p[i].name,p[i].rollno,p[i].marks);
    }
}
int main(){
    int n;
    printf("Number of students: ");
    scanf("%d",n);

    struct student* arr= malloc(n* sizeof(struct student));
    
    inputstudents(arr,n);
    displaystudents(arr,n);
    
    return 0;
}