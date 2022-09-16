#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *p=NULL;
    // FILE *pr;
    // char ch;
    p=fopen("sonu.text","r+");
    if(p==NULL){
        printf("error\n");
        exit(1);
    }
    fputs("hii hello sonu",p);

    // pr = fopen("sonu.text","r");
    //    while (!feof(p))
    // {
    // ch=fgetc(pr);
    // printf("%c",ch);
    // }
    fclose(p);

}