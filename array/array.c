#include <stdio.h>

int main() {
    int i,n;


    printf("enter the array size");
    scanf("%d",&n);
    int a[n];

    printf("Enter the array elements \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);


    printf("array elements are\n");
    
    for(int i=0;i<n;i++)
    printf("%d  ",a[i]);

    printf("\nreverse array elements are\n");
    for(int i=n-1;i>=0;i--)
    printf("%d  ",a[i]);
    
    return 0;
}