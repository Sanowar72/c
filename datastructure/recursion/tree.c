#include<stdio.h>

void rfun(int n){

    if(n>0){
        printf("%d ",n);
        rfun(n-1);
        rfun(n-1);
    }
}

int main(){

    rfun(5);
    return 0;
}