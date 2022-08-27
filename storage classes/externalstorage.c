#include<stdio.h>

void sum(){
    int x=10,y=3;
    printf("sum is : %d\n",x+y);
}

void display(){
   
    printf("hello im from display\n");
}

int main(){
    extern int a;
    printf("value of a is: %d\n",a);
    sum();
    display();
}
 int a=19;