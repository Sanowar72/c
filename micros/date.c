#include<stdio.h>

int main(){
    
    printf("date : %s \n",__DATE__);
    printf("time : %s \n",__TIME__);
    printf("file : %s \n",__FILE__);
    printf("line no is : %d \n",__LINE__);
    printf("ANSI is : %d \n",__STDC__);

    return 0;
}