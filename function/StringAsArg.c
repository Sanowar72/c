#include<stdio.h>
#include<string.h>

// void str(){
//     char s[50];
//     printf("Enter the string\n");
//     gets(s);
//     puts(s);
// }


void str(char s1[],char s2[]){
    printf("First string is : %s\n",s1);
    printf("Second string is :");
    puts(s2);
}
int main(){
    // str();
    char s1[10]="sonu";
    char s2[10]="monu";
    str(s1,s2);
}