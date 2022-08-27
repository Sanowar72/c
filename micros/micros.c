#include<stdio.h>
#define MAX(a,b) if(a>b) \
                 printf("%d is greater",a); \
                 else \
                 printf("%d is greater",b);

int main(){
    MAX(20,10);
    return 0;
}