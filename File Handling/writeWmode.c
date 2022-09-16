#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
//    w mode is used to write on file
// if file is it will write if file will ot be there it will create file nd write 
// if any data will be there it will erase that data and it ill will data u wanna write
    FILE *p;
    // char ch='a';
    char s[50];
    p = fopen("sonu.text","w");
    // fprintf(ch,p);
    printf("Enterh the string\n");
    gets(s);
    // fputc(ch,p);
    fputs(s,p);
    fclose(p);
    printf("%s",__FILE__);
    return 0;
}
