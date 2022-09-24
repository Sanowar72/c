#include <stdio.h>
void TOH(int n,char A,char B,char C)
{
    
 if(n>0)
 {
 TOH(n-1,A,C,B);
 printf("(%c,%c)\n",A,C);
 TOH(n-1,B,A,C);
 }
}
int main()
{
    int n;
    char A='A',B='B',C='C';
    printf("Enter the no of disk\n");
    scanf("%d",&n);
    TOH(n,A,B,C);
 return 0;
}