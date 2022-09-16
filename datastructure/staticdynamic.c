#include<stdio.h>

int rfun(int n){

    static int x=0;
    if(n>0){
        x++;
        return rfun(n-1)+x;
    }
    else return 0;
}
int main(){
    int r;
    r=rfun(5);
    printf("%d\n",r);
}