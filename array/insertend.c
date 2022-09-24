#include<stdio.h>


int main(){

    int a[50],i,s,n;
    printf("Enter the array size\n");
    scanf("%d",&s);
    printf("Enter the array elements\n");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }

    printf("Array elements are: \n");
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }

    printf("\nEnter the no u wanna insert at last:\n");
    scanf("%d",&n);
    a[s]=n;

    printf("Array elemnets are: \n");
    for(i=0;i<=s;i++){
        printf("%d ",a[i]);
    }
}