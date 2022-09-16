#include<stdio.h>

// we cant write auto varialbe as a global
// auto int a=9;
void main(){

    // it will stored in RAM;
    //  function or local scope;
    auto int a;
    {
        auto int a=20;
        printf("inside block %d\n",a);
    }

    printf("inside main function %d\n",a);
}