#include<stdio.h>
int main(){
    int n,l,i,j;
    printf("enter the range: \n ");
    scanf("%d%d",&n,&l);
    for(i=n;i<=l;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            printf("%d is prime no\n",i);
        }
    }
}