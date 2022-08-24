#include<stdio.h>


int sum(int a, int b){
    int sum=0;
    sum=a+b;
    printf("sum is : %d\n",sum);
}

int main(){
    printf("Hii inside of main function\n");
    sum(8,9);
    printf("call by value\n");
}