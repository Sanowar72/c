#include<stdio.h>

void sum(){
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    int sum=0;
    sum=a+b;
    printf("sum is :%d\n",sum);
}

int main(){
    sum();
    sum();
    sum();
}