#include<stdio.h>
#include<string.h>
int main(){
    int n,num=0,pnum=0,temp;
    printf("enter the no\n");
    scanf("%d",&n);
    temp=n;
    while (n>0){
        
     num = n%10;
     pnum = (pnum*10)+num;
     n = n/10;
    }
    if(temp == pnum){
        printf("no is palindrome");
    }else{
        printf("no are not palindrome");
    }


    
    
    
    return 0;
}