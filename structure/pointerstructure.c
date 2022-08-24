#include<stdio.h>

struct student
{
    int rollno;
    char name[50];
    int marks;
};

int main(){
    struct student s={9,"sony roy",97};
    struct student *p=&s;
   
    printf("students details are\n");
    
        printf("%d  %s  %d\n",p->rollno,s.name,(*p).marks);
        
    

}