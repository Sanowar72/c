#include<stdio.h>
#include<string.h>

int *returnPointer(int a[]){
    return a+2;
}
int main(){
    int a[5]={4,7,9,3,6},*p;
    p=returnPointer(a);
    printf("%d",*p);
}