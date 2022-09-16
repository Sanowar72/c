#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char s[50],ch;
    int i;
    int count=0;
    printf("Enter the string\n");
    gets(s);
    printf("enter the character u wanna occurence\n");
    ch=getchar();

//    printf("%c",ch);
//     puts(s);

    for(int i =0;i<strlen(s);i++){
        if(s[i]==ch){
            count++;
        }
    }

    printf("%c is there in %s %d times",ch,s,count);
}