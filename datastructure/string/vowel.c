#include<stdio.h>

int main(){

    char s[100];
    int i,vc=0,cc=0;
    printf("Enter the string : \n");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        printf("%c  ",s[i]);
        vc++;
        }
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
        cc++;
        }
    }
    printf("\nTotal no of vowels is %d \n",vc);
    printf("Total no of consonant is : %d ",cc);
    // puts(s);
}