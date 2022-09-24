#include<stdio.h>



int fib(int n){
    if(n<=1)
    return n;
    else
    return fib(n-2)+fib(n-1);
}

int main(){
    int n,f;
    printf("Enter the no\n");
    scanf("%d",&n);
    f=fib(n);
    printf("%d ",f);
}