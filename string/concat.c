#include<stdio.h>
#include<string.h>
int main(){
    int l1,l2;
    char s1[50],s2[50];
    printf("Enter the 1st string\n");
    gets(s1);
    printf("Enter the 2nd string\n");
    gets(s2);
    // strcat(s1,s2);
    strncat(s1,s2,3);
    puts(s1);
//     l1=strlen(s1);
//     l2=strlen(s2);
    
//     for(int i=0;i<l2;i++){
//         s1[l1+i]=s2[i];
//     }
//    puts(s1);

}