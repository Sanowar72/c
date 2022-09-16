#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
//    r mode is used to read  file

    FILE *p;
    char s[50],ch;
   
   
    p = fopen("sonu.text","r");
    // while (!feof(p))
    // {
    // fgets(s,40,p);
    // puts(s);
    // }

    while (!feof(p))
    {
    ch=fgetc(p);
    printf("%c",ch);
    }


    fclose(p);
    printf("%s",__FILE__);
    return 0;
}
