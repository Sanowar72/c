#include<stdio.h>

int a=50;


int sum();



int main(){

    sum();
    // int a=20;
    {
        int a=15;
        printf("%d\n",a);
    }

    printf("%d\n",a);
    return 0;
}

int sum(){
    printf("%d\n",a);
    return 0;
}

