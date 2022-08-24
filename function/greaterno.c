#include<stdio.h>

int greater(int a, int b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    int a,b;
    printf("Enter the two no\n");
    scanf("%d%d",&a,&b);
    int s = greater(a,b);
    printf("Greater no is : %d",s);
}