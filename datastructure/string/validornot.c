#include<stdio.h>


int valid(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z') && !(s[i]>=48 && s[i]<=57)){
            return 0;
        }
       
    }
     return 1;
}


int main(){
    char s[100];
    // char *s="sonu?123";
    printf("Enter the string : \n");
    gets(s);

    // int res = valid(s);
    if(valid(s)){
    printf("Its valid string : \n");
    printf("Its valid string : \n");
    printf("Its valid string : \n");
    }
    else{
    printf("Its not a valid string : \n");
    printf("Its not a valid string : \n");
    printf("Its not a valid string : \n");
    }
}