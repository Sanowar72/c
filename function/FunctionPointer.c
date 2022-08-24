#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){

    int s=0;
    int (*ptr)(int a,int b)=&sum;
    // we can write s=ptr(3,4) also
    s=(*ptr)(3,4);
    printf("%d",s);
}