#include<stdio.h>
int main(){
    int n;
    printf("enter the no\n");
    scanf("%d",&n);
    if(n%2!=0)
    printf("%d no is not a prime\n",n);
    else
    printf("%d no is prime no\n",n);
    return 0;
}