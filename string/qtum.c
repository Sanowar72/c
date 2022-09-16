#include<stdio.h>
#include<string.h>

int main(){

    char s[50],ch;
    int count;
    printf("enter the string\n");
    gets(s);
    // printf("enter the string u want to search\n");
    // ch=getchar();
    for(int i=0;i<strlen(s);i++){
        count=0;
        for(int j=i;j<strlen(s);j++){

            if(s[i]==s[j]){
              
                count++;

            }

        }
        if(count>0){
            printf("%c is there in string %d times\n",s[i],count);
        }
       
    }
    printf("%c in the string is %d times",ch,count);
    return 0;
}