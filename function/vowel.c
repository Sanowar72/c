#include<stdio.h>
#include<string.h>

int main(){
    char c,s;
    printf("Enter the character\n");
    // s=getchar();
    scanf("%c",&c);
    // if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("its vowel\n");
    }else
    printf("its not a vowel letter\n");

}
