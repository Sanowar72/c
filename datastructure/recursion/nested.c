#include<stdio.h>

int recur(int n){
    if(n>100)
    return n-10;
    else
    return recur(recur(n+11));
}

int main(){
    int n;
    printf("Enter the no\n");

    scanf("%d",&n);
    int res=recur(n);
    printf("%d",res);
    return 0;

}