#include<stdio.h>

int sum(void){
    int a,b,sum=0;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}
int main(){
    int s= sum();
    printf("sum is :%d",s);
}