#include<stdio.h>
// using function
// int fact(int n){
//     if(n==0||n==1){
//         return 1;
//     }else
//     {
//         return (n*fact(n-1));
//     }
    
// }



int main(){
    int n,i;
    int val=1;
    printf("enter the no for factorial\n");
    scanf("%d",&n);
//    without using function
    // if(n==0 || n==1){
    //     int f=1;
    //    printf("%d",f);
    // }
    // else{
      for(i=n;i>0;i--)
    //   {
          val = val*i;

    //   }
      printf("%d",val);
    // }
    // int factorial= fact(n);
    // printf("factorial of a no is %d",factorial);
    
}