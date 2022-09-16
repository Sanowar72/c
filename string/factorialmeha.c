#include<stdio.h>
int main(){
    int n,value=1;
    printf("enter the no u want to factorial\n");
    scanf("%d",&n);
    for (int i = n; i >0; i--)
    {
        value= value*i;
    }
    printf("%d ",value);
    
}