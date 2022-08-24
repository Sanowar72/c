#include<stdio.h>


struct student
{
    int rollno;
    char name[50];
    int marks;
};


int main(){
    struct student s1={9,"sanowar alam",83};
    printf("Your student details is:\n");
    printf("%d  %s   %d",s1.rollno,s1.name,s1.marks);
}
