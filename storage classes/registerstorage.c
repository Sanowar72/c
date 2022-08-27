#include<stdio.h>

// we cant store global variable in register
// register variable cant declare as a global

int main(){
//   value stored in register
// local or function scope
    register i,sum=0;
    for(i=1;i<=10;i++){
        sum=sum+i;
    }
    printf("sum is : %d",sum);

    return 0;
}