#include<stdio.h>
#include<stdlib.h>

// realloc is used to increase and decrease the size of memory
int main(){
    int n,*p,i;
    printf("Enter the no u want to insert\n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));

    printf("Enter the values\n");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }

    printf("enter the update size\n");
    scanf("%d",&n);

    int *pt=(int *)realloc(p,n*sizeof(n));

    printf("previous address %d\n  new address %d\n",p,pt);
    
    printf("Entered values are\n");
    for(i=0;i<n;i++){
        printf("%d\t",*(pt+i));
    }
    free(p);
}