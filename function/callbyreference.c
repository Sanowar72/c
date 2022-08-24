#include<stdio.h>

void ref(int *x,int *y);

int main(){
    int x=10,y=7;
    printf("%d %d\n",x,y);
    printf("%p  %p\n",&x,&y);
    ref(&x,&y);
    printf("%d %d\n",x,y);
}

void ref(int *x,int *y){
   * x=9;
    * y=17;
    printf("%d %d\n",*x,*y);
}