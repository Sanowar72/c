#include<stdio.h>

// life spam is throught the program
// functiom and global scope
// cant declare static as a global variable
// intial value will be 0 if we wont initialize


void sum(){
    static int x=5;
    int y=5;
    x=x+10;
    y=y+10;
    printf("static variable value is : %d\n",x);
    printf("auto variable value is : %d\n",y);
}

void main(){

    //  we cant write like this 
    // printf("%d",x);
    sum();
    sum();
}