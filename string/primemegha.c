#include<stdio.h>

int main (){
    int n,i,count=0;
    printf("enter the no\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;

        }
       
    }
    if(count==2)
    printf("%d is a prime no\n",n);
    else
    printf("%d not a prime no\n",n);


    return 0;
}