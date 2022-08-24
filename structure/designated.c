#include<stdio.h>
struct student
{
  int a,b,c;
};

int main(){
 struct student s={.b=20,.c=34,.a=25};
 printf("%d %d %d",s.a,s.b,s.c);
}