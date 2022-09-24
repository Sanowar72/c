#include<stdio.h>

int main(){
    int n,i,temp,fact,sum=0;
    printf("Enter the no:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        fact = n%10;
        sum=sum*10+fact;
        n=n/10;
    }
    if(temp==sum)
    printf("no are palindrome\n");
    else{
        printf("no are not palindrome\n");
    }

}