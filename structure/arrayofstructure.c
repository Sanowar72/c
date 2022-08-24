#include<stdio.h>

struct student
{
    int rollno;
    char name[50];
    int marks;
};

int main(){
    struct student s[3];
    printf("Enter the students detail\n");
    for(int i=0;i<3;i++){
        scanf("%d%s%d",&s[i].rollno,s[i].name,&s[i].marks);
        // scanf("%d",&s[i].rollno);
        // gets(s[i].name);
        // scanf("%d",&s[i].marks);

    }
    printf("students details are\n");
    for(int i=0;i<3;i++){
        printf("%d  %s  %d\n",s[i].rollno,s[i].name,s[i].marks);
        // printf("%d",s[i].rollno);
        // puts(s[i].name);
        // printf("%d",s[i].marks);
    }

}