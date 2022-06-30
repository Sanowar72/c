#include<stdio.h>
#include<string.h>
int main(){
    int i,l;
    char s[10],temp;
    printf("enter string:\n");
    gets(s);
    l=strlen(s);
    for(i=0;i<l/2;i++){
        temp=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=temp;

    }
    
    printf("rev string is: %s",s);

}