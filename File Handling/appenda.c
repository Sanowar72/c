#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *p;
    char s[50];
    p=fopen("sonu.text","a");
    printf("Enter the string\n");
    gets(s);
    fputs(s,p);
    
    return 0;
}