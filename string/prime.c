#include<stdio.h>


int prime(int n){
    for (int i = 2; i*i <=n; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    
}
int main(){
    int i,n1,n2;
    printf("enter the 1st no\n");
    scanf("%d",&n1);
    printf("enter the 2nd no\n");
    scanf("%d",&n2);
    printf("prime no between %d %d is:",n1,n2);
    for(i=n1;i<=n2;i++){
        if(prime(i)){
            printf("%d",i);
        }
    }
}