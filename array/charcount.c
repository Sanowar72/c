#include <stdio.h>
#include<string.h>

int main() {
    char s[500],sr;
    int count=0,i=0,l;
    
    
    
    printf("enter the string\n");
    gets(s);
    printf("enter the char u want to search\n");
    sr=getchar();
    l=strlen(s);
    for(i=0;i<=l;i++){
        if(s[i]==sr){
            count ++;
        }
    }
    printf("%d",count);
   

    return 0;
}