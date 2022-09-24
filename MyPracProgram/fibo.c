#include<stdio.h>

int main(){
    int a=0,b=1,n,c;
    printf("Enter the no\n");
    scanf("%d",&n);
    if(n>0)
    printf("%d ",a);
     if(n>1)
    printf("%d ",b);
    
        for(int i=3;i<=n;i++){
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;

        }
    

}