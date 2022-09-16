#include<stdio.h>
void nfun(int n);

void mfun(int n){

    if(n>0){
        printf("%d ",n);
        nfun(n);
    }
}

void nfun(int n){

    if(n>0){
        printf("%d ",n);
        mfun(n-1);
    }
}

int main(){
    mfun(5);
    return 0;
}