#include<stdio.h>


int fact(int n){
    if(n==0)
    return 1;
    else 
     return fact(n-1)*n;
}

int main(){

int f,n,r;
printf("Enter the n value\n");
scanf("%d",&n);
printf("Enter the r value\n");
scanf("%d",&r);
f=fact(n)/((fact(r)*fact(n-r)));
printf("%d ",f);

}