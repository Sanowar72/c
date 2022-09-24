#include<stdio.h>

int main(){
    int m,n;
    printf("Enter the two no\n");
    scanf("%d %d",&m,&n);
    while (m!=n)
    {
       if(m>n){
           m=m-n;
       }else if (n>m)
       {
          n=n-m;
       }
       
    }
    printf("Gcd of two no is: %d",m);
    return 0;
}