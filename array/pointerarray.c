#include<stdio.h>
int main(){
    int a[6]={2,5,7,1,8};
    int *p=&a[2];
    printf("%d",*p);
}