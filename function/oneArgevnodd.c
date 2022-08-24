#include<stdio.h>

int sonu(int a){
    if(a%2==0){
        printf("no is even\n");
    }else{
        printf("no id odd\n");
    }
}

int main(){
    int s;
    printf("Enter the no\n");
    scanf("%d",&s);
    sonu(s);
}