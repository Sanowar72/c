#include<stdio.h>


struct sonu
{
    int roll;
    char name[15];
    int marks;
}s1={9,"sonu s1",72};


int main(){
    struct sonu s2 = {102,"usha",85};
    struct sonu s3;
    s3.roll=5;
    printf("enter the name of s3\n");
    scanf("%s",s3.name);
    // s3.name="akshu";
    s3.marks=89;


    printf("s1 details are\n");
    printf("%d   %s   %d\n",s1.roll,s1.name,s1.marks);
     printf("s2 details are\n");
    printf("%d   %s   %d\n",s2.roll,s2.name,s2.marks);
     printf("s3 details are\n");
    printf("%d   %s  %d\n ",s3.roll,s3.name,s3.marks);
}