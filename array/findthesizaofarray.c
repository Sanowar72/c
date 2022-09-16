#include<stdio.h>

int main(){
    char s[]={1,3,7,9,4,7,2,61,43,12};
    int num=sizeof(s)/sizeof(s[0]);
    printf("%d",num);
}