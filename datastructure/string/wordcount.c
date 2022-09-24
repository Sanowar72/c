#include<stdio.h>

int main(){
    char s[200];
    int i,cw=1;
    printf("Enter the string : \n");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' ' && s[i-1]!=' '){
            cw++;
        }
    }

    printf("Total word is %d ",cw);
}