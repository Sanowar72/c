#include <stdio.h>

int main() {
   int n,u;
   printf("Enter correct no\n");
   scanf("%d",&n);
   printf("enter any no ");
   scanf("%d",&u);
   while(u!=n){
     printf("enter any no again");
     scanf("%d",&u);
   
   }
   printf("u entered correct no the no is %d",u);

    return 0;
}