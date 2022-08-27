#include<stdio.h>
#include<stdlib.h>

// calloc is stands for continious allocation
int main(){
    int n,*p,i;
    printf("Enter the no u want to insert\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));

    //   commented to see calloc value is 0
    // printf("Enter the values\n");
    // for(i=0;i<n;i++){
    //     scanf("%d",(p+i));
    // }

     printf("Enter the values\n");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }


    printf("Entered values are\n");
    for(i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
    free(p);
}