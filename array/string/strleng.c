#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    printf("enter your name:\n");
    gets(s);
    int len = strlen (s);
    puts(s);
    printf("length of str is: %d\n",len);
    int i=0,count=0;
    while (s[i]!='\0')
    {
        count++;
        i++;
    }
    printf("length of string is: %d",count);
}