#include<stdio.h>
#include<string.h>
int main(){
    int value,flag=0,i;
    char s1[10],s2[10];
    printf("enter char of 1st string\n");
    gets(s1);
    printf("enter char of 2nd string\n");
    gets(s2);
    // value=strcmp(s1,s2);
    for(i=0;s1[i]!='\0' ||s2[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            flag++;
        }
    }
    if(flag==0){
        printf("strings are same");
    }else{
        printf("string are not same");
    }
}