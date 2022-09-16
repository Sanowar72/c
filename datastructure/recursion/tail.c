#include<stdio.h>


void rfun(int n){
    if(n>0){
        rfun(n-1);
        printf("%d ",n);
        // rfun(n-1);
    }
}

int main(){
    int num;
    printf("Enter the no\n");
    scanf("%d",&num);
    rfun(num);
    return 0;
}