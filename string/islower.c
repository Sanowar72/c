#include<stdio.h>
#include<string.h>
int main(){
    char s[40];
    int i;
    printf("enter the strng:\n");
    gets(s);
    // strlwr(s);

    // for(i=0;s[i]!='\0';i++){
    //     if(s[i]>='A' && s[i]<='Z'){
    //         s[i]=s[i]+32;
    //     }
    // }
    // string upper
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    printf("string is: %s",s);
}
